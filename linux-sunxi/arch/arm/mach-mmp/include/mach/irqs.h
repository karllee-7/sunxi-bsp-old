/*
 * arch/arm/mach-mmp/include/mach/irqs.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef __ASM_MACH_IRQS_H
#define __ASM_MACH_IRQS_H

/*
 * Interrupt numbers for PXA168
 */
#define IRQ_PXA168_NONE			(-1)
#define IRQ_PXA168_SSP4			0
#define IRQ_PXA168_SSP3			1
#define IRQ_PXA168_SSP2			2
#define IRQ_PXA168_SSP1			3
#define IRQ_PXA168_PMIC_INT		4
#define IRQ_PXA168_RTC_INT		5
#define IRQ_PXA168_RTC_ALARM		6
#define IRQ_PXA168_TWSI0		7
#define IRQ_PXA168_GPU			8
#define IRQ_PXA168_KEYPAD		9
#define IRQ_PXA168_ONEWIRE		12
#define IRQ_PXA168_TIMER1		13
#define IRQ_PXA168_TIMER2		14
#define IRQ_PXA168_TIMER3		15
#define IRQ_PXA168_CMU			16
#define IRQ_PXA168_SSP5			17
#define IRQ_PXA168_MSP_WAKEUP		19
#define IRQ_PXA168_CF_WAKEUP		20
#define IRQ_PXA168_XD_WAKEUP		21
#define IRQ_PXA168_MFU			22
#define IRQ_PXA168_MSP			23
#define IRQ_PXA168_CF			24
#define IRQ_PXA168_XD			25
#define IRQ_PXA168_DDR_INT		26
#define IRQ_PXA168_UART1		27
#define IRQ_PXA168_UART2		28
#define IRQ_PXA168_UART3		29
#define IRQ_PXA168_WDT			35
#define IRQ_PXA168_MAIN_PMU		36
#define IRQ_PXA168_FRQ_CHANGE		38
#define IRQ_PXA168_SDH1			39
#define IRQ_PXA168_SDH2			40
#define IRQ_PXA168_LCD			41
#define IRQ_PXA168_CI			42
#define IRQ_PXA168_USB1			44
#define IRQ_PXA168_NAND			45
#define IRQ_PXA168_HIFI_DMA		46
#define IRQ_PXA168_DMA_INT0		47
#define IRQ_PXA168_DMA_INT1		48
#define IRQ_PXA168_GPIOX		49
#define IRQ_PXA168_USB2			51
#define IRQ_PXA168_AC97			57
#define IRQ_PXA168_TWSI1		58
#define IRQ_PXA168_AP_PMU		60
#define IRQ_PXA168_SM_INT		63

/*
 * Interrupt numbers for PXA910
 */
#define IRQ_PXA910_NONE			(-1)
#define IRQ_PXA910_AIRQ			0
#define IRQ_PXA910_SSP3			1
#define IRQ_PXA910_SSP2			2
#define IRQ_PXA910_SSP1			3
#define IRQ_PXA910_PMIC_INT		4
#define IRQ_PXA910_RTC_INT		5
#define IRQ_PXA910_RTC_ALARM		6
#define IRQ_PXA910_TWSI0		7
#define IRQ_PXA910_GPU			8
#define IRQ_PXA910_KEYPAD		9
#define IRQ_PXA910_ROTARY		10
#define IRQ_PXA910_TRACKBALL		11
#define IRQ_PXA910_ONEWIRE		12
#define IRQ_PXA910_AP1_TIMER1		13
#define IRQ_PXA910_AP1_TIMER2		14
#define IRQ_PXA910_AP1_TIMER3		15
#define IRQ_PXA910_IPC_AP0		16
#define IRQ_PXA910_IPC_AP1		17
#define IRQ_PXA910_IPC_AP2		18
#define IRQ_PXA910_IPC_AP3		19
#define IRQ_PXA910_IPC_AP4		20
#define IRQ_PXA910_IPC_CP0		21
#define IRQ_PXA910_IPC_CP1		22
#define IRQ_PXA910_IPC_CP2		23
#define IRQ_PXA910_IPC_CP3		24
#define IRQ_PXA910_IPC_CP4		25
#define IRQ_PXA910_L2_DDR		26
#define IRQ_PXA910_UART2		27
#define IRQ_PXA910_UART3		28
#define IRQ_PXA910_AP2_TIMER1		29
#define IRQ_PXA910_AP2_TIMER2		30
#define IRQ_PXA910_CP2_TIMER1		31
#define IRQ_PXA910_CP2_TIMER2		32
#define IRQ_PXA910_CP2_TIMER3		33
#define IRQ_PXA910_GSSP			34
#define IRQ_PXA910_CP2_WDT		35
#define IRQ_PXA910_MAIN_PMU		36
#define IRQ_PXA910_CP_FREQ_CHG		37
#define IRQ_PXA910_AP_FREQ_CHG		38
#define IRQ_PXA910_MMC			39
#define IRQ_PXA910_AEU			40
#define IRQ_PXA910_LCD			41
#define IRQ_PXA910_CCIC			42
#define IRQ_PXA910_IRE			43
#define IRQ_PXA910_USB1			44
#define IRQ_PXA910_NAND			45
#define IRQ_PXA910_HIFI_DMA		46
#define IRQ_PXA910_DMA_INT0		47
#define IRQ_PXA910_DMA_INT1		48
#define IRQ_PXA910_AP_GPIO		49
#define IRQ_PXA910_AP2_TIMER3		50
#define IRQ_PXA910_USB2			51
#define IRQ_PXA910_TWSI1		54
#define IRQ_PXA910_CP_GPIO		55
#define IRQ_PXA910_UART1		59	/* Slow UART */
#define IRQ_PXA910_AP_PMU		60
#define IRQ_PXA910_SM_INT		63	/* from PinMux */

/*
 * Interrupt numbers for MMP2
 */
#define IRQ_MMP2_NONE			(-1)
#define IRQ_MMP2_SSP1			0
#define IRQ_MMP2_SSP2			1
#define IRQ_MMP2_SSPA1			2
#define IRQ_MMP2_SSPA2			3
#define IRQ_MMP2_PMIC_MUX		4	/* PMIC & Charger */
#define IRQ_MMP2_RTC_MUX		5
#define IRQ_MMP2_TWSI1			7
#define IRQ_MMP2_GPU			8
#define IRQ_MMP2_KEYPAD			9
#define IRQ_MMP2_ROTARY			10
#define IRQ_MMP2_TRACKBALL		11
#define IRQ_MMP2_ONEWIRE		12
#define IRQ_MMP2_TIMER1			13
#define IRQ_MMP2_TIMER2			14
#define IRQ_MMP2_TIMER3			15
#define IRQ_MMP2_RIPC			16
#define IRQ_MMP2_TWSI_MUX		17	/* TWSI2 ~ TWSI6 */
#define IRQ_MMP2_HDMI			19
#define IRQ_MMP2_SSP3			20
#define IRQ_MMP2_SSP4			21
#define IRQ_MMP2_USB_HS1		22
#define IRQ_MMP2_USB_HS2		23
#define IRQ_MMP2_UART3			24
#define IRQ_MMP2_UART1			27
#define IRQ_MMP2_UART2			28
#define IRQ_MMP2_MIPI_DSI		29
#define IRQ_MMP2_CI2			30
#define IRQ_MMP2_PMU_TIMER1		31
#define IRQ_MMP2_PMU_TIMER2		32
#define IRQ_MMP2_PMU_TIMER3		33
#define IRQ_MMP2_USB_FS			34
#define IRQ_MMP2_MISC_MUX		35
#define IRQ_MMP2_WDT1			36
#define IRQ_MMP2_NAND_DMA		37
#define IRQ_MMP2_USIM			38
#define IRQ_MMP2_MMC			39
#define IRQ_MMP2_WTM			40
#define IRQ_MMP2_LCD			41
#define IRQ_MMP2_CI			42
#define IRQ_MMP2_IRE			43
#define IRQ_MMP2_USB_OTG		44
#define IRQ_MMP2_NAND			45
#define IRQ_MMP2_UART4			46
#define IRQ_MMP2_DMA_FIQ		47
#define IRQ_MMP2_DMA_RIQ		48
#define IRQ_MMP2_GPIO			49
#define IRQ_MMP2_SSP_MUX		51
#define IRQ_MMP2_MMC2			52
#define IRQ_MMP2_MMC3			53
#define IRQ_MMP2_MMC4			54
#define IRQ_MMP2_MIPI_HSI		55
#define IRQ_MMP2_MSP			58
#define IRQ_MMP2_MIPI_SLIM_DMA		59
#define IRQ_MMP2_PJ4_FREQ_CHG		60
#define IRQ_MMP2_MIPI_SLIM		62
#define IRQ_MMP2_SM			63

#define IRQ_MMP2_MUX_BASE		64

/* secondary interrupt of INT #4 */
#define IRQ_MMP2_PMIC_BASE		(IRQ_MMP2_MUX_BASE)
#define IRQ_MMP2_CHARGER		(IRQ_MMP2_PMIC_BASE + 0)
#define IRQ_MMP2_PMIC			(IRQ_MMP2_PMIC_BASE + 1)

/* secondary interrupt of INT #5 */
#define IRQ_MMP2_RTC_BASE		(IRQ_MMP2_PMIC_BASE + 2)
#define IRQ_MMP2_RTC_ALARM		(IRQ_MMP2_RTC_BASE + 0)
#define IRQ_MMP2_RTC			(IRQ_MMP2_RTC_BASE + 1)

/* secondary interrupt of INT #17 */
#define IRQ_MMP2_TWSI_BASE		(IRQ_MMP2_RTC_BASE + 2)
#define IRQ_MMP2_TWSI2			(IRQ_MMP2_TWSI_BASE + 0)
#define IRQ_MMP2_TWSI3			(IRQ_MMP2_TWSI_BASE + 1)
#define IRQ_MMP2_TWSI4			(IRQ_MMP2_TWSI_BASE + 2)
#define IRQ_MMP2_TWSI5			(IRQ_MMP2_TWSI_BASE + 3)
#define IRQ_MMP2_TWSI6			(IRQ_MMP2_TWSI_BASE + 4)

/* secondary interrupt of INT #35 */
#define IRQ_MMP2_MISC_BASE		(IRQ_MMP2_TWSI_BASE + 5)
#define IRQ_MMP2_PERF			(IRQ_MMP2_MISC_BASE + 0)
#define IRQ_MMP2_L2_PA_ECC		(IRQ_MMP2_MISC_BASE + 1)
#define IRQ_MMP2_L2_ECC			(IRQ_MMP2_MISC_BASE + 2)
#define IRQ_MMP2_L2_UECC		(IRQ_MMP2_MISC_BASE + 3)
#define IRQ_MMP2_DDR			(IRQ_MMP2_MISC_BASE + 4)
#define IRQ_MMP2_FAB0_TIMEOUT		(IRQ_MMP2_MISC_BASE + 5)
#define IRQ_MMP2_FAB1_TIMEOUT		(IRQ_MMP2_MISC_BASE + 6)
#define IRQ_MMP2_FAB2_TIMEOUT		(IRQ_MMP2_MISC_BASE + 7)
#define IRQ_MMP2_THERMAL		(IRQ_MMP2_MISC_BASE + 9)
#define IRQ_MMP2_MAIN_PMU		(IRQ_MMP2_MISC_BASE + 10)
#define IRQ_MMP2_WDT2			(IRQ_MMP2_MISC_BASE + 11)
#define IRQ_MMP2_CORESIGHT		(IRQ_MMP2_MISC_BASE + 12)
#define IRQ_MMP2_COMMTX			(IRQ_MMP2_MISC_BASE + 13)
#define IRQ_MMP2_COMMRX			(IRQ_MMP2_MISC_BASE + 14)

/* secondary interrupt of INT #51 */
#define IRQ_MMP2_SSP_BASE		(IRQ_MMP2_MISC_BASE + 15)
#define IRQ_MMP2_SSP1_SRDY		(IRQ_MMP2_SSP_BASE + 0)
#define IRQ_MMP2_SSP3_SRDY		(IRQ_MMP2_SSP_BASE + 1)

#define IRQ_MMP2_MUX_END		(IRQ_MMP2_SSP_BASE + 2)

#define IRQ_GPIO_START			128
#define MMP_NR_BUILTIN_GPIO		192
#define MMP_GPIO_TO_IRQ(gpio)		(IRQ_GPIO_START + (gpio))

#define IRQ_BOARD_START			(IRQ_GPIO_START + MMP_NR_BUILTIN_GPIO)
#define MMP_NR_IRQS			IRQ_BOARD_START

#endif /* __ASM_MACH_IRQS_H */
