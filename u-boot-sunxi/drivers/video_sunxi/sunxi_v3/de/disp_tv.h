/*
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */

#ifndef __DISP_TV_H__
#define __DISP_TV_H__


#include "disp_private.h"

__s32 disp_init_tv(disp_bsp_init_para * para) ; //call by disp_display


struct disp_device_private_data {
	__u32 enabled;

	disp_tv_mode tv_mode;

	disp_tv_func tv_func;

	disp_video_timings *video_info;

	struct disp_clk_info lcd_clk;

	char *clk;

	char *clk_parent;

	u32 irq_no;
};

s32 disp_tv_suspend(struct disp_device* ptv);
s32 disp_tv_resume(struct disp_device* ptv);


#endif
