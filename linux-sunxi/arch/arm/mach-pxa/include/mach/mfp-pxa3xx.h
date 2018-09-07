/*
 * arch/arm/mach-pxa/include/mach/mfp-pxa3xx.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef __ASM_ARCH_MFP_PXA3XX_H
#define __ASM_ARCH_MFP_PXA3XX_H

#include <plat/mfp.h>

#define MFPR_BASE	(0x40e10000)

/* PXA3xx common MFP configurations - processor specific ones defined
 * in mfp-pxa300.h and mfp-pxa320.h
 */
#define GPIO0_GPIO		MFP_CFG(GPIO0, AF0)
#define GPIO1_GPIO		MFP_CFG(GPIO1, AF0)
#define GPIO2_GPIO		MFP_CFG(GPIO2, AF0)
#define GPIO3_GPIO		MFP_CFG(GPIO3, AF0)
#define GPIO4_GPIO		MFP_CFG(GPIO4, AF0)
#define GPIO5_GPIO		MFP_CFG(GPIO5, AF0)
#define GPIO6_GPIO		MFP_CFG(GPIO6, AF0)
#define GPIO7_GPIO		MFP_CFG(GPIO7, AF0)
#define GPIO8_GPIO		MFP_CFG(GPIO8, AF0)
#define GPIO9_GPIO		MFP_CFG(GPIO9, AF0)
#define GPIO10_GPIO		MFP_CFG(GPIO10, AF0)
#define GPIO11_GPIO		MFP_CFG(GPIO11, AF0)
#define GPIO12_GPIO		MFP_CFG(GPIO12, AF0)
#define GPIO13_GPIO		MFP_CFG(GPIO13, AF0)
#define GPIO14_GPIO		MFP_CFG(GPIO14, AF0)
#define GPIO15_GPIO		MFP_CFG(GPIO15, AF0)
#define GPIO16_GPIO		MFP_CFG(GPIO16, AF0)
#define GPIO17_GPIO		MFP_CFG(GPIO17, AF0)
#define GPIO18_GPIO		MFP_CFG(GPIO18, AF0)
#define GPIO19_GPIO		MFP_CFG(GPIO19, AF0)
#define GPIO20_GPIO		MFP_CFG(GPIO20, AF0)
#define GPIO21_GPIO		MFP_CFG(GPIO21, AF0)
#define GPIO22_GPIO		MFP_CFG(GPIO22, AF0)
#define GPIO23_GPIO		MFP_CFG(GPIO23, AF0)
#define GPIO24_GPIO		MFP_CFG(GPIO24, AF0)
#define GPIO25_GPIO		MFP_CFG(GPIO25, AF0)
#define GPIO26_GPIO		MFP_CFG(GPIO26, AF0)
#define GPIO27_GPIO		MFP_CFG(GPIO27, AF0)
#define GPIO28_GPIO		MFP_CFG(GPIO28, AF0)
#define GPIO29_GPIO		MFP_CFG(GPIO29, AF0)
#define GPIO30_GPIO		MFP_CFG(GPIO30, AF0)
#define GPIO31_GPIO		MFP_CFG(GPIO31, AF0)
#define GPIO32_GPIO		MFP_CFG(GPIO32, AF0)
#define GPIO33_GPIO		MFP_CFG(GPIO33, AF0)
#define GPIO34_GPIO		MFP_CFG(GPIO34, AF0)
#define GPIO35_GPIO		MFP_CFG(GPIO35, AF0)
#define GPIO36_GPIO		MFP_CFG(GPIO36, AF0)
#define GPIO37_GPIO		MFP_CFG(GPIO37, AF0)
#define GPIO38_GPIO		MFP_CFG(GPIO38, AF0)
#define GPIO39_GPIO		MFP_CFG(GPIO39, AF0)
#define GPIO40_GPIO		MFP_CFG(GPIO40, AF0)
#define GPIO41_GPIO		MFP_CFG(GPIO41, AF0)
#define GPIO42_GPIO		MFP_CFG(GPIO42, AF0)
#define GPIO43_GPIO		MFP_CFG(GPIO43, AF0)
#define GPIO44_GPIO		MFP_CFG(GPIO44, AF0)
#define GPIO45_GPIO		MFP_CFG(GPIO45, AF0)

#define GPIO47_GPIO		MFP_CFG(GPIO47, AF0)
#define GPIO48_GPIO		MFP_CFG(GPIO48, AF0)

#define GPIO53_GPIO		MFP_CFG(GPIO53, AF0)
#define GPIO54_GPIO		MFP_CFG(GPIO54, AF0)
#define GPIO55_GPIO		MFP_CFG(GPIO55, AF0)

#define GPIO57_GPIO		MFP_CFG(GPIO57, AF0)

#define GPIO63_GPIO		MFP_CFG(GPIO63, AF0)
#define GPIO64_GPIO		MFP_CFG(GPIO64, AF0)
#define GPIO65_GPIO		MFP_CFG(GPIO65, AF0)
#define GPIO66_GPIO		MFP_CFG(GPIO66, AF0)
#define GPIO67_GPIO		MFP_CFG(GPIO67, AF0)
#define GPIO68_GPIO		MFP_CFG(GPIO68, AF0)
#define GPIO69_GPIO		MFP_CFG(GPIO69, AF0)
#define GPIO70_GPIO		MFP_CFG(GPIO70, AF0)
#define GPIO71_GPIO		MFP_CFG(GPIO71, AF0)
#define GPIO72_GPIO		MFP_CFG(GPIO72, AF0)
#define GPIO73_GPIO		MFP_CFG(GPIO73, AF0)
#define GPIO74_GPIO		MFP_CFG(GPIO74, AF0)
#define GPIO75_GPIO		MFP_CFG(GPIO75, AF0)
#define GPIO76_GPIO		MFP_CFG(GPIO76, AF0)
#define GPIO77_GPIO		MFP_CFG(GPIO77, AF0)
#define GPIO78_GPIO		MFP_CFG(GPIO78, AF0)
#define GPIO79_GPIO		MFP_CFG(GPIO79, AF0)
#define GPIO80_GPIO		MFP_CFG(GPIO80, AF0)
#define GPIO81_GPIO		MFP_CFG(GPIO81, AF0)
#define GPIO82_GPIO		MFP_CFG(GPIO82, AF0)
#define GPIO83_GPIO		MFP_CFG(GPIO83, AF0)
#define GPIO84_GPIO		MFP_CFG(GPIO84, AF0)
#define GPIO85_GPIO		MFP_CFG(GPIO85, AF0)
#define GPIO86_GPIO		MFP_CFG(GPIO86, AF0)
#define GPIO87_GPIO		MFP_CFG(GPIO87, AF0)
#define GPIO88_GPIO		MFP_CFG(GPIO88, AF0)
#define GPIO89_GPIO		MFP_CFG(GPIO89, AF0)
#define GPIO90_GPIO		MFP_CFG(GPIO90, AF0)
#define GPIO91_GPIO		MFP_CFG(GPIO91, AF0)
#define GPIO92_GPIO		MFP_CFG(GPIO92, AF0)
#define GPIO93_GPIO		MFP_CFG(GPIO93, AF0)
#define GPIO94_GPIO		MFP_CFG(GPIO94, AF0)
#define GPIO95_GPIO		MFP_CFG(GPIO95, AF0)
#define GPIO96_GPIO		MFP_CFG(GPIO96, AF0)
#define GPIO97_GPIO		MFP_CFG(GPIO97, AF0)
#define GPIO98_GPIO		MFP_CFG(GPIO98, AF0)
#define GPIO99_GPIO		MFP_CFG(GPIO99, AF0)
#define GPIO100_GPIO		MFP_CFG(GPIO100, AF0)
#define GPIO101_GPIO		MFP_CFG(GPIO101, AF0)
#define GPIO102_GPIO		MFP_CFG(GPIO102, AF0)
#define GPIO103_GPIO		MFP_CFG(GPIO103, AF0)
#define GPIO104_GPIO		MFP_CFG(GPIO104, AF0)
#define GPIO105_GPIO		MFP_CFG(GPIO105, AF0)
#define GPIO106_GPIO		MFP_CFG(GPIO106, AF0)
#define GPIO107_GPIO		MFP_CFG(GPIO107, AF0)
#define GPIO108_GPIO		MFP_CFG(GPIO108, AF0)
#define GPIO109_GPIO		MFP_CFG(GPIO109, AF0)
#define GPIO110_GPIO		MFP_CFG(GPIO110, AF0)
#define GPIO111_GPIO		MFP_CFG(GPIO111, AF0)
#define GPIO112_GPIO		MFP_CFG(GPIO112, AF0)
#define GPIO113_GPIO		MFP_CFG(GPIO113, AF0)
#define GPIO114_GPIO		MFP_CFG(GPIO114, AF0)
#define GPIO115_GPIO		MFP_CFG(GPIO115, AF0)
#define GPIO116_GPIO		MFP_CFG(GPIO116, AF0)
#define GPIO117_GPIO		MFP_CFG(GPIO117, AF0)
#define GPIO118_GPIO		MFP_CFG(GPIO118, AF0)
#define GPIO119_GPIO		MFP_CFG(GPIO119, AF0)
#define GPIO120_GPIO		MFP_CFG(GPIO120, AF0)
#define GPIO121_GPIO		MFP_CFG(GPIO121, AF0)
#define GPIO122_GPIO		MFP_CFG(GPIO122, AF0)
#define GPIO123_GPIO		MFP_CFG(GPIO123, AF0)
#define GPIO124_GPIO		MFP_CFG(GPIO124, AF0)
#define GPIO125_GPIO		MFP_CFG(GPIO125, AF0)
#define GPIO126_GPIO		MFP_CFG(GPIO126, AF0)
#define GPIO127_GPIO		MFP_CFG(GPIO127, AF0)

#define GPIO0_2_GPIO		MFP_CFG(GPIO0_2, AF0)
#define GPIO1_2_GPIO		MFP_CFG(GPIO1_2, AF0)
#define GPIO2_2_GPIO		MFP_CFG(GPIO2_2, AF0)
#define GPIO3_2_GPIO		MFP_CFG(GPIO3_2, AF0)
#define GPIO4_2_GPIO		MFP_CFG(GPIO4_2, AF0)
#define GPIO5_2_GPIO		MFP_CFG(GPIO5_2, AF0)
#define GPIO6_2_GPIO		MFP_CFG(GPIO6_2, AF0)

/* NOTE: usage of these two functions is not recommended,
 * use pxa3xx_mfp_config() instead.
 */
static inline unsigned long pxa3xx_mfp_read(int mfp)
{
	return mfp_read(mfp);
}

static inline void pxa3xx_mfp_write(int mfp, unsigned long val)
{
	mfp_write(mfp, val);
}

static inline void pxa3xx_mfp_config(unsigned long *mfp_cfg, int num)
{
	mfp_config(mfp_cfg, num);
}
#endif /* __ASM_ARCH_MFP_PXA3XX_H */
