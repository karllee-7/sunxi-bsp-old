/*
 * drivers/mmc/host/imxmmc.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#define MMC_REG_STR_STP_CLK		0x00
#define MMC_REG_STATUS			0x04
#define MMC_REG_CLK_RATE		0x08
#define MMC_REG_CMD_DAT_CONT		0x0C
#define MMC_REG_RES_TO			0x10
#define MMC_REG_READ_TO			0x14
#define MMC_REG_BLK_LEN			0x18
#define MMC_REG_NOB			0x1C
#define MMC_REG_REV_NO			0x20
#define MMC_REG_INT_MASK		0x24
#define MMC_REG_CMD			0x28
#define MMC_REG_ARGH			0x2C
#define MMC_REG_ARGL			0x30
#define MMC_REG_RES_FIFO		0x34
#define MMC_REG_BUFFER_ACCESS		0x38

#define STR_STP_CLK_IPG_CLK_GATE_DIS    (1<<15)
#define STR_STP_CLK_IPG_PERCLK_GATE_DIS (1<<14)
#define STR_STP_CLK_ENDIAN              (1<<5)
#define STR_STP_CLK_RESET               (1<<3)
#define STR_STP_CLK_ENABLE              (1<<2)
#define STR_STP_CLK_START_CLK           (1<<1)
#define STR_STP_CLK_STOP_CLK            (1<<0)
#define STATUS_CARD_PRESENCE            (1<<15)
#define STATUS_SDIO_INT_ACTIVE          (1<<14)
#define STATUS_END_CMD_RESP             (1<<13)
#define STATUS_WRITE_OP_DONE            (1<<12)
#define STATUS_DATA_TRANS_DONE          (1<<11)
#define STATUS_WR_CRC_ERROR_CODE_MASK   (3<<10)
#define STATUS_CARD_BUS_CLK_RUN         (1<<8)
#define STATUS_APPL_BUFF_FF             (1<<7)
#define STATUS_APPL_BUFF_FE             (1<<6)
#define STATUS_RESP_CRC_ERR             (1<<5)
#define STATUS_CRC_READ_ERR             (1<<3)
#define STATUS_CRC_WRITE_ERR            (1<<2)
#define STATUS_TIME_OUT_RESP            (1<<1)
#define STATUS_TIME_OUT_READ            (1<<0)
#define STATUS_ERR_MASK                 0x2f
#define CLK_RATE_PRESCALER(x)           ((x) & 0x7)
#define CLK_RATE_CLK_RATE(x)            (((x) & 0x7) << 3)
#define CMD_DAT_CONT_CMD_RESP_LONG_OFF  (1<<12)
#define CMD_DAT_CONT_STOP_READWAIT      (1<<11)
#define CMD_DAT_CONT_START_READWAIT     (1<<10)
#define CMD_DAT_CONT_BUS_WIDTH_1        (0<<8)
#define CMD_DAT_CONT_BUS_WIDTH_4        (2<<8)
#define CMD_DAT_CONT_INIT               (1<<7)
#define CMD_DAT_CONT_BUSY               (1<<6)
#define CMD_DAT_CONT_STREAM_BLOCK       (1<<5)
#define CMD_DAT_CONT_WRITE              (1<<4)
#define CMD_DAT_CONT_DATA_ENABLE        (1<<3)
#define CMD_DAT_CONT_RESPONSE_FORMAT_R1 (1)
#define CMD_DAT_CONT_RESPONSE_FORMAT_R2 (2)
#define CMD_DAT_CONT_RESPONSE_FORMAT_R3 (3)
#define CMD_DAT_CONT_RESPONSE_FORMAT_R4 (4)
#define CMD_DAT_CONT_RESPONSE_FORMAT_R5 (5)
#define CMD_DAT_CONT_RESPONSE_FORMAT_R6 (6)
#define INT_MASK_AUTO_CARD_DETECT       (1<<6)
#define INT_MASK_DAT0_EN                (1<<5)
#define INT_MASK_SDIO                   (1<<4)
#define INT_MASK_BUF_READY              (1<<3)
#define INT_MASK_END_CMD_RES            (1<<2)
#define INT_MASK_WRITE_OP_DONE          (1<<1)
#define INT_MASK_DATA_TRAN              (1<<0)
#define INT_ALL                         (0x7f)
