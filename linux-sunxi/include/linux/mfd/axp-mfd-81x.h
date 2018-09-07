/*
 * include/linux/mfd/axp-mfd-81x.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef __LINUX_AXP_MFD_81X_H_
#define __LINUX_AXP_MFD_81X_H_

/*For AXP81X*/ 
#define AXP81X                     (28)
#define AXP81X_STATUS              (0x00)
#define AXP81X_MODE_CHGSTATUS      (0x01)
#define AXP81X_IC_TYPE		  (0x03)
#define AXP81X_BUFFER1             (0x04)
#define AXP81X_BUFFER2             (0x05)
#define AXP81X_BUFFER3             (0x06)
#define AXP81X_BUFFER4             (0x07)
#define AXP81X_BUFFER5             (0x08)
#define AXP81X_BUFFER6             (0x09)
#define AXP81X_BUFFER7             (0x0A)
#define AXP81X_BUFFER8             (0x0B)
#define AXP81X_BUFFER9             (0x0C)
#define AXP81X_BUFFERA             (0x0D)
#define AXP81X_BUFFERB             (0x0E)
#define AXP81X_BUFFERC             (0x0F)
#define AXP81X_BC_SET              (0x2C)
#define AXP81X_BC_DET_STATUS       (0x2F)
#define AXP81X_IPS_SET             (0x30)
#define AXP81X_VOFF_SET            (0x31)
#define AXP81X_OFF_CTL             (0x32)
#define AXP81X_CHARGE1             (0x33)
#define AXP81X_CHARGE2             (0x34)
#define AXP81X_CHARGE3             (0x35)
#define AXP81X_POK_SET             (0x36)
#define AXP81X_POK_DELAY_SET       (0x37)
#define AXP81X_CHARGE_AC_SET       (0x3A)
#define AXP81X_DCDC_FREQSET        (0x3B)
#define AXP81X_INTEN1              (0x40)
#define AXP81X_INTEN2              (0x41)
#define AXP81X_INTEN3              (0x42)
#define AXP81X_INTEN4              (0x43)
#define AXP81X_INTEN5              (0x44)
#define AXP81X_INTEN6              (0x45)
#define AXP81X_INTSTS1             (0x48)
#define AXP81X_INTSTS2             (0x49)
#define AXP81X_INTSTS3             (0x4A)
#define AXP81X_INTSTS4             (0x4B)
#define AXP81X_INTSTS5             (0x4C)
#define AXP81X_INTSTS6             (0x4D)

#define AXP81X_LDO_DC_EN1          (0X10)
#define AXP81X_LDO_DC_EN2          (0X12)
#define AXP81X_LDO_DC_EN3          (0X13)
#define AXP81X_DLDO1OUT_VOL        (0x15)
#define AXP81X_DLDO2OUT_VOL        (0x16)
#define AXP81X_DLDO3OUT_VOL        (0x17)
#define AXP81X_DLDO4OUT_VOL        (0x18)
#define AXP81X_ELDO1OUT_VOL        (0x19)
#define AXP81X_ELDO2OUT_VOL        (0x1A)
#define AXP81X_ELDO3OUT_VOL        (0x1B)
#define AXP81X_FLDO1OUT_VOL        (0x1C)
#define AXP81X_FLDO2OUT_VOL        (0x1D)
#define AXP81X_FLDO3OUT_VOL        (0x1D)
#define AXP81X_DC1OUT_VOL          (0x20)
#define AXP81X_DC2OUT_VOL          (0x21)
#define AXP81X_DC3OUT_VOL          (0x22)
#define AXP81X_DC4OUT_VOL          (0x23)
#define AXP81X_DC5OUT_VOL          (0x24)
#define AXP81X_DC6OUT_VOL          (0x25)
#define AXP81X_DC7OUT_VOL          (0x26)
#define AXP81X_GPIO0LDOOUT_VOL     (0x91)
#define AXP81X_GPIO1LDOOUT_VOL     (0x93)
#define AXP81X_ALDO1OUT_VOL        (0x28)
#define AXP81X_ALDO2OUT_VOL        (0x29)
#define AXP81X_ALDO3OUT_VOL        (0x2A)
#define AXP81X_GPIO0LDOOUT_VOL     (0x91)
#define AXP81X_GPIO1LDOOUT_VOL     (0x93)

#define AXP81X_DCDC_MODESET        (0x80)
#define AXP81X_DCDC_MONITOR        (0x81)
#define AXP81X_ADC_EN              (0x82)
#define AXP81X_HOTOVER_CTL         (0x8F)

#define AXP81X_GPIO0_CTL           (0x90)
#define AXP81X_GPIO1_CTL           (0x92)
#define AXP81X_GPIO01_SIGNAL       (0x94)
#define AXP81X_BAT_CHGCOULOMB3     (0xB0)
#define AXP81X_BAT_CHGCOULOMB2     (0xB1)
#define AXP81X_BAT_CHGCOULOMB1     (0xB2)
#define AXP81X_BAT_CHGCOULOMB0     (0xB3)
#define AXP81X_BAT_DISCHGCOULOMB3  (0xB4)
#define AXP81X_BAT_DISCHGCOULOMB2  (0xB5)
#define AXP81X_BAT_DISCHGCOULOMB1  (0xB6)
#define AXP81X_BAT_DISCHGCOULOMB0  (0xB7)
#define AXP81X_COULOMB_CTL         (0xB8)

/* bit definitions for AXP events ,irq event */
/*  AXP81X  */
#define	AXP81X_IRQ_USBRE                 ( 1 <<  2)
#define	AXP81X_IRQ_USBIN                 ( 1 <<  3)
#define	AXP81X_IRQ_USBOV                 ( 1 <<  4)
#define	AXP81X_IRQ_ACRE                  ( 1 <<  5)
#define	AXP81X_IRQ_ACIN                  ( 1 <<  6)
#define	AXP81X_IRQ_ACOV                  ( 1 <<  7)
#define	AXP81X_IRQ_CHAOV                 ( 1 << 10)
#define	AXP81X_IRQ_CHAST                 ( 1 << 11)
#define	AXP81X_IRQ_BATATOU               ( 1 << 12)
#define	AXP81X_IRQ_BATATIN               ( 1 << 13)
#define AXP81X_IRQ_BATRE                 ( 1 << 14)
#define AXP81X_IRQ_BATIN                 ( 1 << 15)
#define AXP81X_IRQ_QBATINWORK            ( 1 << 16)
#define AXP81X_IRQ_BATINWORK             ( 1 << 17)
#define AXP81X_IRQ_QBATOVWORK            ( 1 << 18)
#define AXP81X_IRQ_BATOVWORK             ( 1 << 19)
#define AXP81X_IRQ_QBATINCHG             ( 1 << 20)
#define AXP81X_IRQ_BATINCHG              ( 1 << 21)
#define AXP81X_IRQ_QBATOVCHG             ( 1 << 22)
#define AXP81X_IRQ_BATOVCHG              ( 1 << 23)
#define AXP81X_IRQ_EXTLOWARN2            ( 1 << 24)
#define AXP81X_IRQ_EXTLOWARN1            ( 1 << 25)
#define AXP81X_IRQ_ADCFINISHED           ( 1 << 26)
#define AXP81X_IRQ_PMICTEMP_OV_LEVEL2    ( 1 << 31)
#define AXP81X_IRQ_GPIO0TG               ((uint64_t)1 << 32)
#define AXP81X_IRQ_GPIO1TG               ((uint64_t)1 << 33)
#define AXP81X_IRQ_PEK_OFFTIME           ((uint64_t)1 << 34)
#define AXP81X_IRQ_PEK_LONGTIME          ((uint64_t)1 << 35)
#define AXP81X_IRQ_PEK_SHORTTIME         ((uint64_t)1 << 36)
#define AXP81X_IRQ_PEK_NEDGE             ((uint64_t)1 << 37)
#define AXP81X_IRQ_PEK_PEDGE             ((uint64_t)1 << 38)
#define AXP81X_IRQ_TIMER                 ((uint64_t)1 << 39)
#define AXP81X_IRQ_VBUS_CHNG             ((uint64_t)1 << 40)
#define AXP81X_IRQ_MV_CHNG               ((uint64_t)1 << 41)
#define AXP81X_IRQ_BC_USB_CHNG           ((uint64_t)1 << 42)

/* Status Query Interface */
/*  AXP81X  */
#define AXP81X_STATUS_SOURCE     ( 1 <<  0)
#define AXP81X_STATUS_ACUSBSH 	( 1 <<  1)
#define AXP81X_STATUS_BATCURDIR 	( 1 <<  2)
#define AXP81X_STATUS_USBLAVHO 	( 1 <<  3)
#define AXP81X_STATUS_USBVA    	( 1 <<  4)
#define AXP81X_STATUS_USBEN    	( 1 <<  5)
#define AXP81X_STATUS_ACVA	( 1 <<  6)
#define AXP81X_STATUS_ACEN	( 1 <<  7)

#define AXP81X_STATUS_BATINACT  	( 1 << 11)
                               	
#define AXP81X_STATUS_BATEN     	( 1 << 13)
#define AXP81X_STATUS_INCHAR    	( 1 << 14)
#define AXP81X_STATUS_ICTEMOV   	( 1 << 15)

#define AXP81X_VOL_MAX		1		// capability buffer length
#endif /* __LINUX_AXP_MFD_23_H_ */
