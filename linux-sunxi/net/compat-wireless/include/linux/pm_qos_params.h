/*
 * net/compat-wireless/include/linux/pm_qos_params.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#include <linux/version.h>

#ifndef __COMPAT_LINUX_PM_QOS_PARAMS_H
#define __COMPAT_LINUX_PM_QOS_PARAMS_H

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(3,4,0))
#include_next <linux/pm_qos.h>
#else
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,25))
#include_next <linux/pm_qos_params.h>
#else
/* interface for the pm_qos_power infrastructure of the linux kernel.
 *
 * Mark Gross <mgross@linux.intel.com>
 */
#include <linux/list.h>
#include <linux/notifier.h>
#include <linux/miscdevice.h>

#define PM_QOS_RESERVED 0
#define PM_QOS_CPU_DMA_LATENCY 1
#define PM_QOS_NETWORK_LATENCY 2
#define PM_QOS_NETWORK_THROUGHPUT 3
#define PM_QOS_SYSTEM_BUS_FREQ 4

#define PM_QOS_NUM_CLASSES 5
#define PM_QOS_DEFAULT_VALUE -1

int pm_qos_add_requirement(int qos, char *name, s32 value);
int pm_qos_update_requirement(int qos, char *name, s32 new_value);
void pm_qos_remove_requirement(int qos, char *name);

int pm_qos_requirement(int qos);

int pm_qos_add_notifier(int qos, struct notifier_block *notifier);
int pm_qos_remove_notifier(int qos, struct notifier_block *notifier);
#endif /* (LINUX_VERSION_CODE >= KERNEL_VERSION(2,6,25)) */
#endif /* (LINUX_VERSION_CODE >= KERNEL_VERSION(3,4,0)) */

#endif
