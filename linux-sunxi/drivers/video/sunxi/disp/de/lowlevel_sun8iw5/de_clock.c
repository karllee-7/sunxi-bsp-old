/*
 * drivers/video/sunxi/disp/de/lowlevel_sun8iw5/de_clock.c
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#include "de_clock.h"

#define disp_clk_inf(clk_id, clk_name, clk_src_name, clk_freq)   {.id = clk_id, .name = clk_name, .src_name = clk_src_name, .freq = clk_freq}

__disp_clk_t disp_clk_pll_tbl[] =
{
	disp_clk_inf(SYS_CLK_PLL3,		"pll_video",	NULL,			0),
	disp_clk_inf(SYS_CLK_PLL10,		"pll_de",		NULL,			0),
	disp_clk_inf(SYS_CLK_MIPIPLL,	"pll_mipi",		"pll_video",	0),
};

__disp_clk_t disp_clk_mod_tbl[] =
{
	disp_clk_inf(MOD_CLK_DEBE0,		"debe0", 	"pll_de",	117000000),
	disp_clk_inf(MOD_CLK_DEFE0,		"defe0", 	"pll_de",	234000000),
	disp_clk_inf(MOD_CLK_LCD0CH0,	"lcd0ch0",	"pll_mipi",	0),
	disp_clk_inf(MOD_CLK_MIPIDSIS,	"mipidsi",	"pll_video",0),
	disp_clk_inf(MOD_CLK_MIPIDSIP,	"mipidphy",	"pll_video",150000000),
	disp_clk_inf(MOD_CLK_IEPDRC0,	"drc0",		"pll_de",	156000000),
	disp_clk_inf(MOD_CLK_LVDS,		"lvds",		NULL,		0),
	disp_clk_inf(MOD_CLK_SAT0,		"sat",		NULL,		0),
};
