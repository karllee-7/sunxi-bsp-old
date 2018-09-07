/*
 * drivers/cpufreq/sunxi-autohotplug.c
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#include <linux/cpumask.h>
#include <linux/cpufreq.h>
#include <linux/module.h>
#include "autohotplug.h"

extern unsigned int  load_try_down;
extern unsigned int  load_try_up;
extern unsigned long cpu_up_lasttime;
extern unsigned int  load_up_stable_us;
extern unsigned int  load_down_stable_us;
extern unsigned int  load_boost_stable_us;

#if defined(CONFIG_SCHED_HMP) || defined(CONFIG_SCHED_SMP_DCMP)
extern unsigned int load_save_up;
static unsigned int little_core_coop_min_freq = 600000;

#ifdef CONFIG_SCHED_HMP
extern void __init arch_get_fast_and_slow_cpus(struct cpumask *fast,
									struct cpumask *slow);
extern unsigned long cpu_boost_lasttime;
extern unsigned int  load_try_boost;
static unsigned int  load_save_big_up = 80;
static unsigned int  load_lastbig_stable_us = 1500000;
int hmp_cluster0_is_big = 0;
#endif
#endif

static int is_cpu_load_stable(unsigned int cpu, int stable_type)
{
	if (cpu >= CONFIG_NR_CPUS)
		return 0;

	if (stable_type == STABLE_DOWN)
		return time_after_eq(jiffies,
					cpu_up_lasttime + usecs_to_jiffies(load_down_stable_us));
	else if(stable_type == STABLE_UP)
		return time_after_eq(jiffies,
					cpu_up_lasttime + usecs_to_jiffies(load_up_stable_us));
	else if(stable_type == STABLE_BOOST)
		return time_after_eq(jiffies,
					cpu_up_lasttime + usecs_to_jiffies(load_boost_stable_us));
#if defined(CONFIG_SCHED_HMP)
	else if(stable_type == STABLE_LAST_BIG)
		return time_after_eq(jiffies,
					cpu_up_lasttime + usecs_to_jiffies(load_lastbig_stable_us));
#endif
	else
		return 0;
}

#if defined(CONFIG_SCHED_HMP)
static int autohotplug_smart_tryup_hmp_normal(struct auto_cpu_hotplug_loadinfo *load)
{
	unsigned int tmp = CONFIG_NR_CPUS;
	int big_nr, little_nr, ret;

	if ((load->max_load != INVALID_LOAD)
			&& (load->max_load >= load_try_up)
			&& is_cpu_load_stable(load->max_cpu, STABLE_UP))
	{
		if (load->max_load >= load_try_boost) {
			if (get_bigs_under(load, load_save_up, NULL)) {
				return 0;
			} else {
				get_cpus_online(load, &little_nr, &big_nr);
				if (big_nr != 0) {
					if (try_up_big())
						ret = 1;
					else
						ret = try_up_little();

					if (ret)
						cpu_boost_lasttime = jiffies;
					return ret;
				} else {
					if (try_up_little())
						ret = 1;
					else
						ret = try_up_big();

					if (ret)
						cpu_boost_lasttime = jiffies;
					return ret;
				}
			}
		} else {
			if (get_cpus_under(load, load_save_up, &tmp)) {
				return 0;
			} else {
				if (try_up_little()) {
					return 1;
				} else {
					if (get_cpus_under(load, load_save_big_up, NULL))
						return 0;
					else
						return try_up_big();
				}
			}
		}
	}

	return 0;
}

static int autohotplug_smart_trydown_hmp_normal(struct auto_cpu_hotplug_loadinfo *load)
{
	unsigned int to_down = CONFIG_NR_CPUS;
	unsigned int on_boost = CONFIG_NR_CPUS;

	if (get_cpus_stable_under(load, load_try_down, &to_down, 0) >= 1) {
		if (get_bigs_under(load, load_try_down, &to_down) >= 2)
			return do_cpu_down(to_down);
		else if (get_littles_under(load, load_try_down, &to_down) > 1)
			return do_cpu_down(to_down);
		else if (get_bigs_under(load, load_try_down, &to_down) == 1
				&& !(get_bigs_above(load, load_try_boost, &on_boost)
				&& is_cpu_load_stable(on_boost, STABLE_BOOST))
				&& (load->cpu_load[to_down] <= load->big_min_load)
				&& is_cpu_load_stable(to_down, STABLE_LAST_BIG))
			return do_cpu_down(to_down);
		else
			return 0;
	} else {
		return 0;
	}
}

static void autohotplug_smart_updatelimits_hmp_normal(void)
{
	int i, big_cpu = CONFIG_NR_CPUS;
	struct cpufreq_policy *policy = cpufreq_cpu_get(0);

	for_each_online_cpu(i) {
		if (is_cpu_big(i)) {
			big_cpu = i;
			break;
		}
	}

	if (big_cpu != CONFIG_NR_CPUS) {
		if (policy) {
			if (policy->min < little_core_coop_min_freq) {
				policy->user_policy.min = little_core_coop_min_freq;
				cpufreq_update_policy(0);
			}
            cpufreq_cpu_put(policy);
		}
	} else {
		if (policy) {
			if (policy->min > policy->cpuinfo.min_freq) {
				policy->user_policy.min = policy->cpuinfo.min_freq;
				cpufreq_update_policy(0);
			}
            cpufreq_cpu_put(policy);
		}
	}
}
#endif
#if defined(CONFIG_SCHED_HMP) || defined(CONFIG_SCHED_SMP_DCMP)
static int autohotplug_smart_tryup_hmp_simple(struct auto_cpu_hotplug_loadinfo *load)
{
	int ret =0;
	unsigned int first;

	if (!get_cpus_under(load, load_save_up, &first)
				&& is_cpu_load_stable(load->max_cpu, STABLE_UP))
	{
		if (try_up_big()) {
			ret = 1;
		} else {
			try_up_little();
			ret = 1;
		}
	}

	return ret;
}

static int autohotplug_smart_trydown_hmp_simple(struct auto_cpu_hotplug_loadinfo *load)
{
	int big_nr, little_nr;
	unsigned int first, to_down;

	get_cpus_online(load, &little_nr, &big_nr);
	if (get_cpus_under(load, load_try_down, &first) >= 2
				&& is_cpu_load_stable(first, STABLE_DOWN))
	{
		if (little_nr) {
			if (get_littles_under(load, load_try_down * 2, &to_down))
				return do_cpu_down(to_down);
		} else {
			return do_cpu_down(first);
		}
	}

	return 0;
}

#if !defined(CONFIG_ARCH_SUN8IW6) && !defined(CONFIG_ARCH_SUN8IW9) && !defined(CONFIG_SCHED_SMP_DCMP)
static void autohotplug_smart_updatelimits_hmp_simple(void)
{
	struct cpufreq_policy *policy1=NULL;
	struct cpufreq_policy *policy2=NULL;
	int i, big_nr = 0, little_nr = 0, big = 0, little = 0;

	for_each_online_cpu(i) {
		if (is_cpu_little(i)) {
			little_nr++;
			little = i;
		} else {
			big = i;
			big_nr++;
		}
	}

	if (little_nr && big_nr) {
		policy1 = cpufreq_cpu_get(big);
		if (policy1 && policy1->min < little_core_coop_min_freq) {
			policy1->user_policy.min = little_core_coop_min_freq;
			cpufreq_update_policy(big);
		}

		policy2 = cpufreq_cpu_get(little);
		if (policy2 && policy2->min < little_core_coop_min_freq) {
			policy2->user_policy.min = little_core_coop_min_freq;
			cpufreq_update_policy(little);
		}
	}else if(big_nr){
		policy1 = cpufreq_cpu_get(big);
		if (policy1 && policy1->min < little_core_coop_min_freq) {
			policy1->user_policy.min = little_core_coop_min_freq;
			cpufreq_update_policy(big);
		}
    }else if(little_nr){
		policy2 = cpufreq_cpu_get(little);
		if (policy2 && policy2->min < little_core_coop_min_freq) {
			policy2->user_policy.min = little_core_coop_min_freq;
			cpufreq_update_policy(little);
		}
    }
    if(policy1)
        cpufreq_cpu_put(policy1);
    if(policy2)
        cpufreq_cpu_put(policy2);
}
#endif
#endif

#if !defined(CONFIG_SCHED_HMP) && !defined(CONFIG_SCHED_SMP_DCMP)
static int autohotplug_smart_tryup_smp_normal(struct auto_cpu_hotplug_loadinfo *load)
{
	unsigned int first;

	if (!get_cpus_under(load, load_try_up, &first)
				&& is_cpu_load_stable(load->max_cpu, STABLE_UP))
	{
		return try_up_little();
	}

	return 0;
}

static int autohotplug_smart_trydown_smp_normal(struct auto_cpu_hotplug_loadinfo *load)
{
	unsigned int first;

	if (get_cpus_under(load, load_try_down, &first) >= 2
				&& is_cpu_load_stable(first, STABLE_DOWN))
	{
		return do_cpu_down(first);
	}

	return 0;
}

static void autohotplug_smart_updatelimits_smp_normal(void)
{

}
#endif
static int autohotplug_smart_get_slow_fast_cpus(struct cpumask *fast,
							struct cpumask *slow)
{
#if defined(CONFIG_SCHED_HMP)
	arch_get_fast_and_slow_cpus(fast, slow);

	if (cpumask_test_cpu(0, fast))
		hmp_cluster0_is_big = 1;
	else
		hmp_cluster0_is_big = 0;

	if (hmp_cluster0_is_big) {
            autohotplug_smart.try_up = autohotplug_smart_tryup_hmp_simple;
            autohotplug_smart.try_down = autohotplug_smart_trydown_hmp_simple;
            autohotplug_smart.update_limits = autohotplug_smart_updatelimits_hmp_simple;
    }
    else
    {
            autohotplug_smart.try_up = autohotplug_smart_tryup_hmp_normal;
            autohotplug_smart.try_down = autohotplug_smart_trydown_hmp_normal;
            autohotplug_smart.update_limits = autohotplug_smart_updatelimits_hmp_normal;
    }
#elif defined(CONFIG_SCHED_SMP_DCMP)
	if (strlen(CONFIG_CLUSTER0_CPU_MASK) && strlen(CONFIG_CLUSTER1_CPU_MASK)) {
		if (cpulist_parse(CONFIG_CLUSTER0_CPU_MASK, fast)) {
			pr_err("Failed to parse cluster0 cpu mask!\n");
			return -1;
		}

		if (cpulist_parse(CONFIG_CLUSTER1_CPU_MASK, slow)) {
			pr_err("Failed to parse cluster1 cpu mask!\n");
			return -1;
		}
	}
    autohotplug_smart.try_up = autohotplug_smart_tryup_hmp_simple;
    autohotplug_smart.try_down = autohotplug_smart_trydown_hmp_simple;
#if !defined(CONFIG_ARCH_SUN8IW6) && !defined(CONFIG_ARCH_SUN8IW9)
    autohotplug_smart.update_limits = autohotplug_smart_updatelimits_hmp_simple;
#endif
#else
	cpumask_copy(slow, cpu_possible_mask);
    autohotplug_smart.try_up = autohotplug_smart_tryup_smp_normal;
    autohotplug_smart.try_down = autohotplug_smart_trydown_smp_normal;
    autohotplug_smart.update_limits = autohotplug_smart_updatelimits_smp_normal;
#endif

	return 0;
}

static void autohotplug_smart_attr_init(void)
{
#if defined(CONFIG_SCHED_HMP) || defined(CONFIG_SCHED_SMP_DCMP)
	autohotplug_attr_add("little_min_freq", &little_core_coop_min_freq, 0644, NULL, NULL);
#ifdef CONFIG_SCHED_HMP
	autohotplug_attr_add("save_big_up",     &load_save_big_up,          0644, NULL, NULL);
	autohotplug_attr_add("stable_lastB_us", &load_lastbig_stable_us,    0644, NULL, NULL);
#endif
#endif
}

struct autohotplug_governor autohotplug_smart = {
	.init_attr = autohotplug_smart_attr_init,
	.get_fast_and_slow_cpus = autohotplug_smart_get_slow_fast_cpus,
};

MODULE_DESCRIPTION("CPU Auto Hotplug");
MODULE_LICENSE("GPL");
