/*
 * drivers/clk/sunxi/clk-sun8iw7_tbl.c
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#include "clk-sun8iw7.h"
/*
 * freq table from hardware, need follow rules
 * 1)   each table  named as
 *      factor_pll1_tbl
 *      factor_pll2_tbl
 *      ...
 * 2) for each table line
 *      a) follow the format PLLx(n,k,m,p,d1,d2,freq), and keep the factors order
 *      b) if any factor not used, skip it
 *      c) the factor is the value to write registers, not means factor+1
 *
 *      example
 *      PLL1(9, 0, 0, 2, 60000000) means PLL1(n,k,m,p,freq)
 *      PLLVIDEO(3, 0, 96000000)       means PLLVIDEO(n,m,freq)
 *
 */

 //n,k,m,p,freq
struct sunxi_clk_factor_freq factor_pllcpu_tbl[] = {
  PLLCPU(     9,    0,    0,    2,    60000000U),
  PLLCPU(    10,    0,    0,    2,    66000000U),
  PLLCPU(    11,    0,    0,    2,    72000000U),
  PLLCPU(    12,    0,    0,    2,    78000000U),
  PLLCPU(    13,    0,    0,    2,    84000000U),
  PLLCPU(    14,    0,    0,    2,    90000000U),
  PLLCPU(    15,    0,    0,    2,    96000000U),
  PLLCPU(    16,    0,    0,    2,   102000000U),
  PLLCPU(    17,    0,    0,    2,   108000000U),
  PLLCPU(    18,    0,    0,    2,   114000000U),
  PLLCPU(     9,    0,    0,    1,   120000000U),
  PLLCPU(    10,    0,    0,    1,   132000000U),
  PLLCPU(    11,    0,    0,    1,   144000000U),
  PLLCPU(    12,    0,    0,    1,   156000000U),
  PLLCPU(    13,    0,    0,    1,   168000000U),
  PLLCPU(    14,    0,    0,    1,   180000000U),
  PLLCPU(    15,    0,    0,    1,   192000000U),
  PLLCPU(    16,    0,    0,    1,   204000000U),
  PLLCPU(    17,    0,    0,    1,   216000000U),
  PLLCPU(    18,    0,    0,    1,   228000000U),
  PLLCPU(     9,    0,    0,    0,   240000000U),
  PLLCPU(    10,    0,    0,    0,   264000000U),
  PLLCPU(    11,    0,    0,    0,   288000000U),
  PLLCPU(    12,    0,    0,    0,   312000000U),
  PLLCPU(    13,    0,    0,    0,   336000000U),
  PLLCPU(    14,    0,    0,    0,   360000000U),
  PLLCPU(    15,    0,    0,    0,   384000000U),
  PLLCPU(    16,    0,    0,    0,   408000000U),
  PLLCPU(    17,    0,    0,    0,   432000000U),
  PLLCPU(    18,    0,    0,    0,   456000000U),
  PLLCPU(    19,    0,    0,    0,   480000000U),
  PLLCPU(    20,    0,    0,    0,   504000000U),
  PLLCPU(    21,    0,    0,    0,   528000000U),
  PLLCPU(    22,    0,    0,    0,   552000000U),
  PLLCPU(    23,    0,    0,    0,   576000000U),
  PLLCPU(    24,    0,    0,    0,   600000000U),
  PLLCPU(    25,    0,    0,    0,   624000000U),
  PLLCPU(    26,    0,    0,    0,   648000000U),
  PLLCPU(    27,    0,    0,    0,   672000000U),
  PLLCPU(    28,    0,    0,    0,   696000000U),
  PLLCPU(    29,    0,    0,    0,   720000000U),
  PLLCPU(    15,    1,    0,    0,   768000000U),
  PLLCPU(    10,    2,    0,    0,   792000000U),
  PLLCPU(    16,    1,    0,    0,   816000000U),
  PLLCPU(    17,    1,    0,    0,   864000000U),
  PLLCPU(    18,    1,    0,    0,   912000000U),
  PLLCPU(    12,    2,    0,    0,   936000000U),
  PLLCPU(    19,    1,    0,    0,   960000000U),
  PLLCPU(    20,    1,    0,    0,  1008000000U),
  PLLCPU(    21,    1,    0,    0,  1056000000U),
  PLLCPU(    14,    2,    0,    0,  1080000000U),
  PLLCPU(    22,    1,    0,    0,  1104000000U),
  PLLCPU(    23,    1,    0,    0,  1152000000U),
  PLLCPU(    24,    1,    0,    0,  1200000000U),
  PLLCPU(    16,    2,    0,    0,  1224000000U),
  PLLCPU(    25,    1,    0,    0,  1248000000U),
  PLLCPU(    26,    1,    0,    0,  1296000000U),
  PLLCPU(    27,    1,    0,    0,  1344000000U),
  PLLCPU(    18,    2,    0,    0,  1368000000U),
  PLLCPU(    19,    2,    0,    0,  1440000000U),
  PLLCPU(    20,    2,    0,    0,  1512000000U),
  PLLCPU(    15,    3,    0,    0,  1536000000U),
  PLLCPU(    21,    2,    0,    0,  1584000000U),
  PLLCPU(    16,    3,    0,    0,  1632000000U),
  PLLCPU(    22,    2,    0,    0,  1656000000U),
  PLLCPU(    23,    2,    0,    0,  1728000000U),
  PLLCPU(    24,    2,    0,    0,  1800000000U),
  PLLCPU(    25,    2,    0,    0,  1872000000U),
};
//n,m,freq
struct sunxi_clk_factor_freq factor_pllvideo_tbl[] = {
PLLVIDEO(     7,    0,   192000000U),
PLLVIDEO(    27,    2,   224000000U),
PLLVIDEO(    18,    1,   228000000U),
PLLVIDEO(    28,    2,   232000000U),
PLLVIDEO(    38,    3,   234000000U),
PLLVIDEO(    19,    1,   240000000U),
PLLVIDEO(    40,    3,   246000000U),
PLLVIDEO(    30,    2,   248000000U),
PLLVIDEO(    20,    1,   252000000U),
PLLVIDEO(    31,    2,   256000000U),
PLLVIDEO(    42,    3,   258000000U),
PLLVIDEO(    86,    7,   261000000U),
PLLVIDEO(    10,    0,   264000000U),
PLLVIDEO(    88,    7,   267000000U),
PLLVIDEO(    44,    3,   270000000U),
PLLVIDEO(    33,    2,   272000000U),
PLLVIDEO(    90,    7,   273000000U),
PLLVIDEO(    22,    1,   276000000U),
PLLVIDEO(    92,    7,   279000000U),
PLLVIDEO(    34,    2,   280000000U),
PLLVIDEO(    46,    3,   282000000U),
PLLVIDEO(    94,    7,   285000000U),
PLLVIDEO(    11,    0,   288000000U),
PLLVIDEO(    96,    7,   291000000U),
PLLVIDEO(    48,    3,   294000000U),
PLLVIDEO(    36,    2,   296000000U),
PLLVIDEO(    98,    7,   297000000U),
PLLVIDEO(    24,    1,   300000000U),
PLLVIDEO(   100,    7,   303000000U),
PLLVIDEO(    37,    2,   304000000U),
PLLVIDEO(    50,    3,   306000000U),
PLLVIDEO(   102,    7,   309000000U),
PLLVIDEO(    51,    3,   312000000U),
PLLVIDEO(   104,    7,   315000000U),
PLLVIDEO(    52,    3,   318000000U),
PLLVIDEO(    39,    2,   320000000U),
PLLVIDEO(   106,    7,   321000000U),
PLLVIDEO(    26,    1,   324000000U),
PLLVIDEO(   108,    7,   327000000U),
PLLVIDEO(    40,    2,   328000000U),
PLLVIDEO(    54,    3,   330000000U),
PLLVIDEO(   110,    7,   333000000U),
PLLVIDEO(    27,    1,   336000000U),
PLLVIDEO(   112,    7,   339000000U),
PLLVIDEO(    56,    3,   342000000U),
PLLVIDEO(   114,    7,   345000000U),
PLLVIDEO(    57,    3,   348000000U),
PLLVIDEO(   116,    7,   351000000U),
PLLVIDEO(    58,    3,   354000000U),
PLLVIDEO(   118,    7,   357000000U),
PLLVIDEO(    14,    0,   360000000U),
PLLVIDEO(   120,    7,   363000000U),
PLLVIDEO(    60,    3,   366000000U),
PLLVIDEO(   122,    7,   369000000U),
PLLVIDEO(    30,    1,   372000000U),
PLLVIDEO(   124,    7,   375000000U),
PLLVIDEO(    62,    3,   378000000U),
PLLVIDEO(   126,    7,   381000000U),
PLLVIDEO(    15,    0,   384000000U),
PLLVIDEO(    64,    3,   390000000U),
PLLVIDEO(    32,    1,   396000000U),
PLLVIDEO(    66,    3,   402000000U),
PLLVIDEO(    33,    1,   408000000U),
PLLVIDEO(    68,    3,   414000000U),
PLLVIDEO(    69,    3,   420000000U),
PLLVIDEO(    70,    3,   426000000U),
PLLVIDEO(    17,    0,   432000000U),
PLLVIDEO(    72,    3,   438000000U),
PLLVIDEO(    36,    1,   444000000U),
PLLVIDEO(    74,    3,   450000000U),
PLLVIDEO(    75,    3,   456000000U),
PLLVIDEO(    76,    3,   462000000U),
PLLVIDEO(    77,    3,   468000000U),
PLLVIDEO(    78,    3,   474000000U),
PLLVIDEO(    39,    1,   480000000U),
PLLVIDEO(    80,    3,   486000000U),
PLLVIDEO(    81,    3,   492000000U),
PLLVIDEO(    82,    3,   498000000U),
PLLVIDEO(    41,    1,   504000000U),
PLLVIDEO(    84,    3,   510000000U),
PLLVIDEO(    85,    3,   516000000U),
PLLVIDEO(    86,    3,   522000000U),
PLLVIDEO(    21,    0,   528000000U),
PLLVIDEO(    88,    3,   534000000U),
PLLVIDEO(    89,    3,   540000000U),
PLLVIDEO(    90,    3,   546000000U),
PLLVIDEO(    22,    0,   552000000U),
PLLVIDEO(    92,    3,   558000000U),
PLLVIDEO(    93,    3,   564000000U),
PLLVIDEO(    94,    3,   570000000U),
PLLVIDEO(    23,    0,   576000000U),
PLLVIDEO(    97,    3,   588000000U),
PLLVIDEO(    98,    3,   594000000U),
PLLVIDEO(    24,    0,   600000000U),
PLLVIDEO(   100,    3,   606000000U),
PLLVIDEO(   101,    3,   612000000U),
PLLVIDEO(   102,    3,   618000000U),
PLLVIDEO(    25,    0,   624000000U),
PLLVIDEO(   104,    3,   630000000U),
PLLVIDEO(   105,    3,   636000000U),
PLLVIDEO(   106,    3,   642000000U),
PLLVIDEO(    26,    0,   648000000U),
PLLVIDEO(   108,    3,   654000000U),
PLLVIDEO(   109,    3,   660000000U),
PLLVIDEO(    27,    0,   672000000U),
PLLVIDEO(   112,    3,   678000000U),
PLLVIDEO(   113,    3,   684000000U),
PLLVIDEO(   114,    3,   690000000U),
PLLVIDEO(    28,    0,   696000000U),
PLLVIDEO(   116,    3,   702000000U),
PLLVIDEO(   117,    3,   708000000U),
PLLVIDEO(    29,    0,   720000000U),
PLLVIDEO(   121,    3,   732000000U),
PLLVIDEO(   122,    3,   738000000U),
PLLVIDEO(    30,    0,   744000000U),
PLLVIDEO(    31,    0,   768000000U),
PLLVIDEO(    32,    0,   792000000U),
PLLVIDEO(    33,    0,   816000000U),
PLLVIDEO(    34,    0,   840000000U),
PLLVIDEO(    35,    0,   864000000U),
PLLVIDEO(    36,    0,   888000000U),
PLLVIDEO(    37,    0,   912000000U),
};
//n,m,freq
struct sunxi_clk_factor_freq factor_pllve_tbl[] = {
   PLLVE(    10,    1,   132000000U),
   PLLVE(    11,    1,   144000000U),
   PLLVE(    12,    1,   156000000U),
   PLLVE(    13,    1,   168000000U),
   PLLVE(    14,    1,   180000000U),
   PLLVE(    22,    2,   184000000U),
   PLLVE(    61,    7,   186000000U),
   PLLVE(    62,    7,   189000000U),
   PLLVE(    23,    2,   192000000U),
   PLLVE(    64,    7,   195000000U),
   PLLVE(    32,    3,   198000000U),
   PLLVE(    24,    2,   200000000U),
   PLLVE(    66,    7,   201000000U),
   PLLVE(    16,    1,   204000000U),
   PLLVE(    68,    7,   207000000U),
   PLLVE(    25,    2,   208000000U),
   PLLVE(    34,    3,   210000000U),
   PLLVE(    70,    7,   213000000U),
   PLLVE(    35,    3,   216000000U),
   PLLVE(    72,    7,   219000000U),
   PLLVE(    36,    3,   222000000U),
   PLLVE(    27,    2,   224000000U),
   PLLVE(    74,    7,   225000000U),
   PLLVE(    37,    3,   228000000U),
   PLLVE(    76,    7,   231000000U),
   PLLVE(    28,    2,   232000000U),
   PLLVE(    38,    3,   234000000U),
   PLLVE(    78,    7,   237000000U),
   PLLVE(    19,    1,   240000000U),
   PLLVE(    80,    7,   243000000U),
   PLLVE(    40,    3,   246000000U),
   PLLVE(    30,    2,   248000000U),
   PLLVE(    82,    7,   249000000U),
   PLLVE(    41,    3,   252000000U),
   PLLVE(    84,    7,   255000000U),
   PLLVE(    31,    2,   256000000U),
   PLLVE(    42,    3,   258000000U),
   PLLVE(    86,    7,   261000000U),
   PLLVE(    21,    1,   264000000U),
   PLLVE(    88,    7,   267000000U),
   PLLVE(    44,    3,   270000000U),
   PLLVE(    33,    2,   272000000U),
   PLLVE(    90,    7,   273000000U),
   PLLVE(    45,    3,   276000000U),
   PLLVE(    92,    7,   279000000U),
   PLLVE(    34,    2,   280000000U),
   PLLVE(    46,    3,   282000000U),
   PLLVE(    94,    7,   285000000U),
   PLLVE(    35,    2,   288000000U),
   PLLVE(    96,    7,   291000000U),
   PLLVE(    48,    3,   294000000U),
   PLLVE(    36,    2,   296000000U),
   PLLVE(    98,    7,   297000000U),
   PLLVE(    24,    1,   300000000U),
   PLLVE(   100,    7,   303000000U),
   PLLVE(    37,    2,   304000000U),
   PLLVE(    50,    3,   306000000U),
   PLLVE(   102,    7,   309000000U),
   PLLVE(    25,    1,   312000000U),
   PLLVE(   104,    7,   315000000U),
   PLLVE(    52,    3,   318000000U),
   PLLVE(    39,    2,   320000000U),
   PLLVE(   106,    7,   321000000U),
   PLLVE(    53,    3,   324000000U),
   PLLVE(   108,    7,   327000000U),
   PLLVE(    40,    2,   328000000U),
   PLLVE(    54,    3,   330000000U),
   PLLVE(   110,    7,   333000000U),
   PLLVE(    41,    2,   336000000U),
   PLLVE(   112,    7,   339000000U),
   PLLVE(    56,    3,   342000000U),
   PLLVE(   114,    7,   345000000U),
   PLLVE(    28,    1,   348000000U),
   PLLVE(   116,    7,   351000000U),
   PLLVE(    58,    3,   354000000U),
   PLLVE(   118,    7,   357000000U),
   PLLVE(    14,    0,   360000000U),
   PLLVE(   120,    7,   363000000U),
   PLLVE(    60,    3,   366000000U),
   PLLVE(   122,    7,   369000000U),
   PLLVE(    61,    3,   372000000U),
   PLLVE(   124,    7,   375000000U),
   PLLVE(    62,    3,   378000000U),
   PLLVE(   126,    7,   381000000U),
   PLLVE(    63,    3,   384000000U),
   PLLVE(    64,    3,   390000000U),
   PLLVE(    65,    3,   396000000U),
   PLLVE(    66,    3,   402000000U),
   PLLVE(    16,    0,   408000000U),
   PLLVE(    68,    3,   414000000U),
   PLLVE(    34,    1,   420000000U),
   PLLVE(    70,    3,   426000000U),
   PLLVE(    35,    1,   432000000U),
   PLLVE(    72,    3,   438000000U),
   PLLVE(    36,    1,   444000000U),
   PLLVE(    74,    3,   450000000U),
   PLLVE(    75,    3,   456000000U),
   PLLVE(    76,    3,   462000000U),
   PLLVE(    38,    1,   468000000U),
   PLLVE(    78,    3,   474000000U),
   PLLVE(    19,    0,   480000000U),
   PLLVE(    80,    3,   486000000U),
   PLLVE(    40,    1,   492000000U),
   PLLVE(    82,    3,   498000000U),
   PLLVE(    20,    0,   504000000U),
   PLLVE(    84,    3,   510000000U),
   PLLVE(    85,    3,   516000000U),
   PLLVE(    86,    3,   522000000U),
   PLLVE(    21,    0,   528000000U),
   PLLVE(    88,    3,   534000000U),
   PLLVE(    89,    3,   540000000U),
   PLLVE(    90,    3,   546000000U),
   PLLVE(    22,    0,   552000000U),
   PLLVE(    92,    3,   558000000U),
   PLLVE(    93,    3,   564000000U),
   PLLVE(    94,    3,   570000000U),
   PLLVE(    23,    0,   576000000U),
   PLLVE(    96,    3,   582000000U),
   PLLVE(    97,    3,   588000000U),
   PLLVE(    98,    3,   594000000U),
   PLLVE(    24,    0,   600000000U),
   PLLVE(   100,    3,   606000000U),
   PLLVE(   101,    3,   612000000U),
   PLLVE(   102,    3,   618000000U),
   PLLVE(    25,    0,   624000000U),
   PLLVE(   104,    3,   630000000U),
   PLLVE(   105,    3,   636000000U),
   PLLVE(   106,    3,   642000000U),
   PLLVE(    26,    0,   648000000U),
   PLLVE(   108,    3,   654000000U),
   PLLVE(   109,    3,   660000000U),
   PLLVE(   110,    3,   666000000U),
   PLLVE(    27,    0,   672000000U),
   PLLVE(   112,    3,   678000000U),
   PLLVE(   113,    3,   684000000U),
   PLLVE(   114,    3,   690000000U),
   PLLVE(    28,    0,   696000000U),
   PLLVE(   116,    3,   702000000U),
   PLLVE(   117,    3,   708000000U),
   PLLVE(   118,    3,   714000000U),
   PLLVE(    29,    0,   720000000U),
   PLLVE(   120,    3,   726000000U),
   PLLVE(   121,    3,   732000000U),
   PLLVE(   122,    3,   738000000U),
   PLLVE(    30,    0,   744000000U),
   PLLVE(   124,    3,   750000000U),
   PLLVE(   125,    3,   756000000U),
   PLLVE(    31,    0,   768000000U),
   PLLVE(    32,    0,   792000000U),
   PLLVE(    33,    0,   816000000U),
   PLLVE(    34,    0,   840000000U),
   PLLVE(    35,    0,   864000000U),
   PLLVE(    36,    0,   888000000U),
   PLLVE(    37,    0,   912000000U),
   PLLVE(    38,    0,   936000000U),
   PLLVE(    39,    0,   960000000U),
   PLLVE(    40,    0,   984000000U),
   PLLVE(    41,    0,  1008000000U),
};
//n,k,m,freq
struct sunxi_clk_factor_freq factor_pllddr_tbl[] = {
  PLLDDR(     3,    1,    3,    48000000U),
  PLLDDR(     9,    0,    3,    60000000U),
  PLLDDR(     7,    0,    2,    64000000U),
  PLLDDR(    10,    0,    3,    66000000U),
  PLLDDR(     2,    3,    3,    72000000U),
  PLLDDR(    12,    0,    3,    78000000U),
  PLLDDR(     4,    1,    2,    80000000U),
  PLLDDR(    13,    0,    3,    84000000U),
  PLLDDR(    10,    0,    2,    88000000U),
  PLLDDR(    14,    0,    3,    90000000U),
  PLLDDR(    15,    0,    3,    96000000U),
  PLLDDR(    16,    0,    3,   102000000U),
  PLLDDR(    12,    0,    2,   104000000U),
  PLLDDR(     5,    2,    3,   108000000U),
  PLLDDR(     6,    1,    2,   112000000U),
  PLLDDR(    18,    0,    3,   114000000U),
  PLLDDR(    19,    0,    3,   120000000U),
  PLLDDR(     6,    2,    3,   126000000U),
  PLLDDR(    15,    0,    2,   128000000U),
  PLLDDR(    21,    0,    3,   132000000U),
  PLLDDR(    16,    0,    2,   136000000U),
  PLLDDR(    22,    0,    3,   138000000U),
  PLLDDR(    11,    1,    3,   144000000U),
  PLLDDR(    24,    0,    3,   150000000U),
  PLLDDR(    18,    0,    2,   152000000U),
  PLLDDR(    25,    0,    3,   156000000U),
  PLLDDR(     9,    1,    2,   160000000U),
  PLLDDR(     8,    2,    3,   162000000U),
  PLLDDR(     6,    3,    3,   168000000U),
  PLLDDR(    28,    0,    3,   174000000U),
  PLLDDR(    21,    0,    2,   176000000U),
  PLLDDR(     9,    2,    3,   180000000U),
  PLLDDR(    22,    0,    2,   184000000U),
  PLLDDR(    30,    0,    3,   186000000U),
  PLLDDR(    31,    0,    3,   192000000U),
  PLLDDR(    10,    2,    3,   198000000U),
  PLLDDR(    24,    0,    2,   200000000U),
  PLLDDR(    16,    1,    3,   204000000U),
  PLLDDR(    25,    0,    2,   208000000U),
  PLLDDR(     8,    2,    2,   216000000U),
  PLLDDR(     6,    3,    2,   224000000U),
  PLLDDR(    18,    1,    3,   228000000U),
  PLLDDR(    28,    0,    2,   232000000U),
  PLLDDR(    12,    2,    3,   234000000U),
  PLLDDR(     9,    3,    3,   240000000U),
  PLLDDR(    30,    0,    2,   248000000U),
  PLLDDR(    13,    2,    3,   252000000U),
  PLLDDR(    15,    1,    2,   256000000U),
  PLLDDR(    10,    2,    2,   264000000U),
  PLLDDR(    14,    2,    3,   270000000U),
  PLLDDR(    16,    1,    2,   272000000U),
  PLLDDR(    22,    1,    3,   276000000U),
  PLLDDR(     8,    3,    2,   288000000U),
  PLLDDR(    24,    1,    3,   300000000U),
  PLLDDR(    18,    1,    2,   304000000U),
  PLLDDR(    16,    2,    3,   306000000U),
  PLLDDR(    12,    2,    2,   312000000U),
  PLLDDR(     9,    3,    2,   320000000U),
  PLLDDR(    17,    2,    3,   324000000U),
  PLLDDR(    13,    3,    3,   336000000U),
  PLLDDR(    18,    2,    3,   342000000U),
  PLLDDR(    28,    0,    1,   348000000U),
  PLLDDR(    10,    3,    2,   352000000U),
  PLLDDR(    19,    2,    3,   360000000U),
  PLLDDR(    22,    1,    2,   368000000U),
  PLLDDR(    30,    0,    1,   372000000U),
  PLLDDR(    20,    2,    3,   378000000U),
  PLLDDR(    11,    3,    2,   384000000U),
  PLLDDR(    21,    2,    3,   396000000U),
  PLLDDR(    24,    1,    2,   400000000U),
  PLLDDR(    16,    3,    3,   408000000U),
  PLLDDR(    22,    2,    3,   414000000U),
  PLLDDR(    12,    3,    2,   416000000U),
  PLLDDR(    23,    2,    3,   432000000U),
  PLLDDR(    27,    1,    2,   448000000U),
  PLLDDR(    24,    2,    3,   450000000U),
  PLLDDR(    18,    2,    2,   456000000U),
  PLLDDR(    28,    1,    2,   464000000U),
  PLLDDR(    12,    2,    1,   468000000U),
  PLLDDR(     9,    3,    1,   480000000U),
  PLLDDR(    26,    2,    3,   486000000U),
  PLLDDR(    30,    1,    2,   496000000U),
  PLLDDR(    13,    2,    1,   504000000U),
  PLLDDR(    15,    3,    2,   512000000U),
  PLLDDR(    28,    2,    3,   522000000U),
  PLLDDR(    10,    3,    1,   528000000U),
  PLLDDR(    14,    2,    1,   540000000U),
  PLLDDR(    16,    3,    2,   544000000U),
  PLLDDR(    22,    3,    3,   552000000U),
  PLLDDR(    30,    2,    3,   558000000U),
  PLLDDR(    23,    2,    2,   576000000U),
  PLLDDR(    24,    2,    2,   600000000U),
  PLLDDR(    18,    3,    2,   608000000U),
  PLLDDR(    16,    2,    1,   612000000U),
  PLLDDR(    12,    3,    1,   624000000U),
  PLLDDR(    19,    3,    2,   640000000U),
  PLLDDR(    17,    2,    1,   648000000U),
  PLLDDR(    27,    0,    0,   672000000U),
  PLLDDR(    18,    2,    1,   684000000U),
  PLLDDR(    28,    2,    2,   696000000U),
  PLLDDR(    21,    3,    2,   704000000U),
  PLLDDR(    19,    2,    1,   720000000U),
  PLLDDR(    22,    3,    2,   736000000U),
  PLLDDR(    30,    0,    0,   744000000U),
  PLLDDR(    20,    2,    1,   756000000U),
  PLLDDR(     7,    3,    0,   768000000U),
  PLLDDR(    21,    2,    1,   792000000U),
  PLLDDR(    16,    1,    0,   816000000U),
  PLLDDR(    22,    2,    1,   828000000U),
  PLLDDR(    11,    2,    0,   864000000U),
  PLLDDR(    24,    2,    1,   900000000U),
  PLLDDR(    18,    1,    0,   912000000U),
  PLLDDR(    12,    2,    0,   936000000U),
  PLLDDR(     9,    3,    0,   960000000U),
  PLLDDR(    26,    2,    1,   972000000U),
  PLLDDR(    13,    2,    0,  1008000000U),
  PLLDDR(    28,    2,    1,  1044000000U),
  PLLDDR(    10,    3,    0,  1056000000U),
  PLLDDR(    14,    2,    0,  1080000000U),
  PLLDDR(    22,    3,    1,  1104000000U),
  PLLDDR(    30,    2,    1,  1116000000U),
  PLLDDR(    23,    1,    0,  1152000000U),
  PLLDDR(    24,    1,    0,  1200000000U),
  PLLDDR(    16,    2,    0,  1224000000U),
  PLLDDR(    25,    1,    0,  1248000000U),
  PLLDDR(    17,    2,    0,  1296000000U),
  PLLDDR(    27,    1,    0,  1344000000U),
  PLLDDR(    18,    2,    0,  1368000000U),
  PLLDDR(    28,    1,    0,  1392000000U),
  PLLDDR(    14,    3,    0,  1440000000U),
  PLLDDR(    30,    1,    0,  1488000000U),
  PLLDDR(    20,    2,    0,  1512000000U),
  PLLDDR(    15,    3,    0,  1536000000U),
  PLLDDR(    21,    2,    0,  1584000000U),
  PLLDDR(    16,    3,    0,  1632000000U),
  PLLDDR(    22,    2,    0,  1656000000U),
  PLLDDR(    17,    3,    0,  1728000000U),
  PLLDDR(    24,    2,    0,  1800000000U),
  PLLDDR(    18,    3,    0,  1824000000U),
  PLLDDR(    19,    3,    0,  1920000000U),
  PLLDDR(    26,    2,    0,  1944000000U),
  PLLDDR(    27,    2,    0,  2016000000U),
  PLLDDR(    28,    2,    0,  2088000000U),
  PLLDDR(    21,    3,    0,  2112000000U),
  PLLDDR(    29,    2,    0,  2160000000U),
  PLLDDR(    22,    3,    0,  2208000000U),
  PLLDDR(    30,    2,    0,  2232000000U),
};
//n,k,freq
struct sunxi_clk_factor_freq factor_pllperiph0_tbl[] = {
PLLPERIPH(     1,    3,    96000000U),
PLLPERIPH(     2,    2,   108000000U),
PLLPERIPH(     4,    1,   120000000U),
PLLPERIPH(    10,    0,   132000000U),
PLLPERIPH(     2,    3,   144000000U),
PLLPERIPH(    12,    0,   156000000U),
PLLPERIPH(     6,    1,   168000000U),
PLLPERIPH(     4,    2,   180000000U),
PLLPERIPH(     3,    3,   192000000U),
PLLPERIPH(    16,    0,   204000000U),
PLLPERIPH(    17,    0,   216000000U),
PLLPERIPH(    18,    0,   228000000U),
PLLPERIPH(     4,    3,   240000000U),
PLLPERIPH(    20,    0,   252000000U),
PLLPERIPH(    10,    1,   264000000U),
PLLPERIPH(    22,    0,   276000000U),
PLLPERIPH(     7,    2,   288000000U),
PLLPERIPH(    24,    0,   300000000U),
PLLPERIPH(    12,    1,   312000000U),
PLLPERIPH(    26,    0,   324000000U),
PLLPERIPH(     6,    3,   336000000U),
PLLPERIPH(    28,    0,   348000000U),
PLLPERIPH(    14,    1,   360000000U),
PLLPERIPH(    30,    0,   372000000U),
PLLPERIPH(     7,    3,   384000000U),
PLLPERIPH(    10,    2,   396000000U),
PLLPERIPH(    16,    1,   408000000U),
PLLPERIPH(    11,    2,   432000000U),
PLLPERIPH(    18,    1,   456000000U),
PLLPERIPH(    12,    2,   468000000U),
PLLPERIPH(     9,    3,   480000000U),
PLLPERIPH(    20,    1,   504000000U),
PLLPERIPH(    10,    3,   528000000U),
PLLPERIPH(    14,    2,   540000000U),
PLLPERIPH(    22,    1,   552000000U),
PLLPERIPH(    11,    3,   576000000U),
PLLPERIPH(    24,    1,   600000000U),
PLLPERIPH(    16,    2,   612000000U),
PLLPERIPH(    12,    3,   624000000U),
PLLPERIPH(    17,    2,   648000000U),
PLLPERIPH(    13,    3,   672000000U),
PLLPERIPH(    18,    2,   684000000U),
PLLPERIPH(    28,    1,   696000000U),
PLLPERIPH(    14,    3,   720000000U),
PLLPERIPH(    30,    1,   744000000U),
PLLPERIPH(    20,    2,   756000000U),
PLLPERIPH(    15,    3,   768000000U),
PLLPERIPH(    21,    2,   792000000U),
PLLPERIPH(    16,    3,   816000000U),
PLLPERIPH(    22,    2,   828000000U),
PLLPERIPH(    23,    2,   864000000U),
PLLPERIPH(    24,    2,   900000000U),
PLLPERIPH(    18,    3,   912000000U),
PLLPERIPH(    25,    2,   936000000U),
PLLPERIPH(    19,    3,   960000000U),

};
//n,m,freq
struct sunxi_clk_factor_freq factor_pllgpu_tbl[] = {
  PLLGPU(    11,    1,   144000000U),
  PLLGPU(    25,    3,   156000000U),
  PLLGPU(    19,    2,   160000000U),
  PLLGPU(    26,    3,   162000000U),
  PLLGPU(    13,    1,   168000000U),
  PLLGPU(    28,    3,   174000000U),
  PLLGPU(    14,    1,   180000000U),
  PLLGPU(    22,    2,   184000000U),
  PLLGPU(     7,    0,   192000000U),
  PLLGPU(    64,    7,   195000000U),
  PLLGPU(    32,    3,   198000000U),
  PLLGPU(    24,    2,   200000000U),
  PLLGPU(    66,    7,   201000000U),
  PLLGPU(    16,    1,   204000000U),
  PLLGPU(    68,    7,   207000000U),
  PLLGPU(    25,    2,   208000000U),
  PLLGPU(    69,    7,   210000000U),
  PLLGPU(    35,    3,   216000000U),
  PLLGPU(    72,    7,   219000000U),
  PLLGPU(    36,    3,   222000000U),
  PLLGPU(    27,    2,   224000000U),
  PLLGPU(    74,    7,   225000000U),
  PLLGPU(    37,    3,   228000000U),
  PLLGPU(    76,    7,   231000000U),
  PLLGPU(    28,    2,   232000000U),
  PLLGPU(    38,    3,   234000000U),
  PLLGPU(    39,    3,   240000000U),
  PLLGPU(    80,    7,   243000000U),
  PLLGPU(    40,    3,   246000000U),
  PLLGPU(    30,    2,   248000000U),
  PLLGPU(    82,    7,   249000000U),
  PLLGPU(    41,    3,   252000000U),
  PLLGPU(    84,    7,   255000000U),
  PLLGPU(    31,    2,   256000000U),
  PLLGPU(    42,    3,   258000000U),
  PLLGPU(    86,    7,   261000000U),
  PLLGPU(    10,    0,   264000000U),
  PLLGPU(    88,    7,   267000000U),
  PLLGPU(    44,    3,   270000000U),
  PLLGPU(    33,    2,   272000000U),
  PLLGPU(    90,    7,   273000000U),
  PLLGPU(    22,    1,   276000000U),
  PLLGPU(    34,    2,   280000000U),
  PLLGPU(    46,    3,   282000000U),
  PLLGPU(    94,    7,   285000000U),
  PLLGPU(    35,    2,   288000000U),
  PLLGPU(    96,    7,   291000000U),
  PLLGPU(    48,    3,   294000000U),
  PLLGPU(    36,    2,   296000000U),
  PLLGPU(    98,    7,   297000000U),
  PLLGPU(    24,    1,   300000000U),
  PLLGPU(    37,    2,   304000000U),
  PLLGPU(    50,    3,   306000000U),
  PLLGPU(   102,    7,   309000000U),
  PLLGPU(    38,    2,   312000000U),
  PLLGPU(   104,    7,   315000000U),
  PLLGPU(    52,    3,   318000000U),
  PLLGPU(    39,    2,   320000000U),
  PLLGPU(   106,    7,   321000000U),
  PLLGPU(    53,    3,   324000000U),
  PLLGPU(   108,    7,   327000000U),
  PLLGPU(    40,    2,   328000000U),
  PLLGPU(    54,    3,   330000000U),
  PLLGPU(   110,    7,   333000000U),
  PLLGPU(    27,    1,   336000000U),
  PLLGPU(   112,    7,   339000000U),
  PLLGPU(    56,    3,   342000000U),
  PLLGPU(   114,    7,   345000000U),
  PLLGPU(    28,    1,   348000000U),
  PLLGPU(   116,    7,   351000000U),
  PLLGPU(    58,    3,   354000000U),
  PLLGPU(   118,    7,   357000000U),
  PLLGPU(    14,    0,   360000000U),
  PLLGPU(   120,    7,   363000000U),
  PLLGPU(   121,    7,   366000000U),
  PLLGPU(   122,    7,   369000000U),
  PLLGPU(    30,    1,   372000000U),
  PLLGPU(   124,    7,   375000000U),
  PLLGPU(    62,    3,   378000000U),
  PLLGPU(   126,    7,   381000000U),
  PLLGPU(    15,    0,   384000000U),
  PLLGPU(    64,    3,   390000000U),
  PLLGPU(    32,    1,   396000000U),
  PLLGPU(    66,    3,   402000000U),
  PLLGPU(    67,    3,   408000000U),
  PLLGPU(    68,    3,   414000000U),
  PLLGPU(    34,    1,   420000000U),
  PLLGPU(    70,    3,   426000000U),
  PLLGPU(    35,    1,   432000000U),
  PLLGPU(    72,    3,   438000000U),
  PLLGPU(    36,    1,   444000000U),
  PLLGPU(    74,    3,   450000000U),
  PLLGPU(    18,    0,   456000000U),
  PLLGPU(    76,    3,   462000000U),
  PLLGPU(    38,    1,   468000000U),
  PLLGPU(    78,    3,   474000000U),
  PLLGPU(    19,    0,   480000000U),
  PLLGPU(    80,    3,   486000000U),
  PLLGPU(    40,    1,   492000000U),
  PLLGPU(    82,    3,   498000000U),
  PLLGPU(    41,    1,   504000000U),
  PLLGPU(    84,    3,   510000000U),
  PLLGPU(    85,    3,   516000000U),
  PLLGPU(    86,    3,   522000000U),
  PLLGPU(    21,    0,   528000000U),
  PLLGPU(    89,    3,   540000000U),
  PLLGPU(    90,    3,   546000000U),
  PLLGPU(    22,    0,   552000000U),
  PLLGPU(    92,    3,   558000000U),
  PLLGPU(    93,    3,   564000000U),
  PLLGPU(    94,    3,   570000000U),
  PLLGPU(    23,    0,   576000000U),
  PLLGPU(    96,    3,   582000000U),
  PLLGPU(    98,    3,   594000000U),
  PLLGPU(    24,    0,   600000000U),
  PLLGPU(   100,    3,   606000000U),
  PLLGPU(   102,    3,   618000000U),
  PLLGPU(    25,    0,   624000000U),
  PLLGPU(   104,    3,   630000000U),
  PLLGPU(   105,    3,   636000000U),
  PLLGPU(   106,    3,   642000000U),
  PLLGPU(    26,    0,   648000000U),
  PLLGPU(   108,    3,   654000000U),
  PLLGPU(   109,    3,   660000000U),
  PLLGPU(   110,    3,   666000000U),
  PLLGPU(    27,    0,   672000000U),
  PLLGPU(   112,    3,   678000000U),
  PLLGPU(   114,    3,   690000000U),
  PLLGPU(    28,    0,   696000000U),
  PLLGPU(   116,    3,   702000000U),
  PLLGPU(   117,    3,   708000000U),
  PLLGPU(   118,    3,   714000000U),
  PLLGPU(    29,    0,   720000000U),
  PLLGPU(   120,    3,   726000000U),
  PLLGPU(   121,    3,   732000000U),
  PLLGPU(   122,    3,   738000000U),
  PLLGPU(    30,    0,   744000000U),
  PLLGPU(   124,    3,   750000000U),
  PLLGPU(    31,    0,   768000000U),
  PLLGPU(    32,    0,   792000000U),
  PLLGPU(    33,    0,   816000000U),
  PLLGPU(    34,    0,   840000000U),
  PLLGPU(    35,    0,   864000000U),
  PLLGPU(    36,    0,   888000000U),
  PLLGPU(    37,    0,   912000000U),
  PLLGPU(    38,    0,   936000000U),
  PLLGPU(    39,    0,   960000000U),
  PLLGPU(    40,    0,   984000000U),
  PLLGPU(    41,    0,  1008000000U),
};
//n,k,freq
struct sunxi_clk_factor_freq factor_pllperiph1_tbl[] = {
PLLPERIPH(     3,    1,    96000000U),
PLLPERIPH(     2,    2,   108000000U),
PLLPERIPH(     4,    1,   120000000U),
PLLPERIPH(    10,    0,   132000000U),
PLLPERIPH(     3,    2,   144000000U),
PLLPERIPH(    12,    0,   156000000U),
PLLPERIPH(     6,    1,   168000000U),
PLLPERIPH(     4,    2,   180000000U),
PLLPERIPH(     7,    1,   192000000U),
PLLPERIPH(    16,    0,   204000000U),
PLLPERIPH(     5,    2,   216000000U),
PLLPERIPH(    18,    0,   228000000U),
PLLPERIPH(    19,    0,   240000000U),
PLLPERIPH(     6,    2,   252000000U),
PLLPERIPH(    10,    1,   264000000U),
PLLPERIPH(    22,    0,   276000000U),
PLLPERIPH(     7,    2,   288000000U),
PLLPERIPH(    24,    0,   300000000U),
PLLPERIPH(    12,    1,   312000000U),
PLLPERIPH(     8,    2,   324000000U),
PLLPERIPH(     6,    3,   336000000U),
PLLPERIPH(    28,    0,   348000000U),
PLLPERIPH(    14,    1,   360000000U),
PLLPERIPH(    30,    0,   372000000U),
PLLPERIPH(     7,    3,   384000000U),
PLLPERIPH(    10,    2,   396000000U),
PLLPERIPH(    16,    1,   408000000U),
PLLPERIPH(    11,    2,   432000000U),
PLLPERIPH(    18,    1,   456000000U),
PLLPERIPH(    12,    2,   468000000U),
PLLPERIPH(    19,    1,   480000000U),
PLLPERIPH(    20,    1,   504000000U),
PLLPERIPH(    21,    1,   528000000U),
PLLPERIPH(    14,    2,   540000000U),
PLLPERIPH(    22,    1,   552000000U),
PLLPERIPH(    15,    2,   576000000U),
PLLPERIPH(    24,    1,   600000000U),
PLLPERIPH(    16,    2,   612000000U),
PLLPERIPH(    12,    3,   624000000U),
PLLPERIPH(    26,    1,   648000000U),
PLLPERIPH(    13,    3,   672000000U),
PLLPERIPH(    18,    2,   684000000U),
PLLPERIPH(    28,    1,   696000000U),
PLLPERIPH(    14,    3,   720000000U),
PLLPERIPH(    30,    1,   744000000U),
PLLPERIPH(    20,    2,   756000000U),
PLLPERIPH(    15,    3,   768000000U),
PLLPERIPH(    21,    2,   792000000U),
PLLPERIPH(    16,    3,   816000000U),
PLLPERIPH(    22,    2,   828000000U),
PLLPERIPH(    23,    2,   864000000U),
PLLPERIPH(    24,    2,   900000000U),
PLLPERIPH(    18,    3,   912000000U),
PLLPERIPH(    25,    2,   936000000U),
PLLPERIPH(    19,    3,   960000000U),
};
//n,m,freq
struct sunxi_clk_factor_freq factor_pllde_tbl[] = {
   PLLDE(     4,    0,   120000000U),
   PLLDE(    10,    1,   132000000U),
   PLLDE(     5,    0,   144000000U),
   PLLDE(    18,    2,   152000000U),
   PLLDE(    12,    1,   156000000U),
   PLLDE(    19,    2,   160000000U),
   PLLDE(    13,    1,   168000000U),
   PLLDE(    21,    2,   176000000U),
   PLLDE(    14,    1,   180000000U),
   PLLDE(    22,    2,   184000000U),
   PLLDE(    30,    3,   186000000U),
   PLLDE(     7,    0,   192000000U),
   PLLDE(    64,    7,   195000000U),
   PLLDE(    65,    7,   198000000U),
   PLLDE(    24,    2,   200000000U),
   PLLDE(    66,    7,   201000000U),
   PLLDE(    16,    1,   204000000U),
   PLLDE(    68,    7,   207000000U),
   PLLDE(    25,    2,   208000000U),
   PLLDE(    34,    3,   210000000U),
   PLLDE(    70,    7,   213000000U),
   PLLDE(    35,    3,   216000000U),
   PLLDE(    72,    7,   219000000U),
   PLLDE(    36,    3,   222000000U),
   PLLDE(    27,    2,   224000000U),
   PLLDE(    74,    7,   225000000U),
   PLLDE(    18,    1,   228000000U),
   PLLDE(    76,    7,   231000000U),
   PLLDE(    28,    2,   232000000U),
   PLLDE(    38,    3,   234000000U),
   PLLDE(    78,    7,   237000000U),
   PLLDE(    19,    1,   240000000U),
   PLLDE(    80,    7,   243000000U),
   PLLDE(    40,    3,   246000000U),
   PLLDE(    30,    2,   248000000U),
   PLLDE(    82,    7,   249000000U),
   PLLDE(    41,    3,   252000000U),
   PLLDE(    84,    7,   255000000U),
   PLLDE(    31,    2,   256000000U),
   PLLDE(    42,    3,   258000000U),
   PLLDE(    86,    7,   261000000U),
   PLLDE(    32,    2,   264000000U),
   PLLDE(    88,    7,   267000000U),
   PLLDE(    44,    3,   270000000U),
   PLLDE(    33,    2,   272000000U),
   PLLDE(    45,    3,   276000000U),
   PLLDE(    92,    7,   279000000U),
   PLLDE(    34,    2,   280000000U),
   PLLDE(    46,    3,   282000000U),
   PLLDE(    94,    7,   285000000U),
   PLLDE(    47,    3,   288000000U),
   PLLDE(    96,    7,   291000000U),
   PLLDE(    48,    3,   294000000U),
   PLLDE(    36,    2,   296000000U),
   PLLDE(    98,    7,   297000000U),
   PLLDE(    24,    1,   300000000U),
   PLLDE(   100,    7,   303000000U),
   PLLDE(    37,    2,   304000000U),
   PLLDE(    50,    3,   306000000U),
   PLLDE(   102,    7,   309000000U),
   PLLDE(    38,    2,   312000000U),
   PLLDE(   104,    7,   315000000U),
   PLLDE(    52,    3,   318000000U),
   PLLDE(    39,    2,   320000000U),
   PLLDE(   106,    7,   321000000U),
   PLLDE(    26,    1,   324000000U),
   PLLDE(   108,    7,   327000000U),
   PLLDE(    40,    2,   328000000U),
   PLLDE(    54,    3,   330000000U),
   PLLDE(   110,    7,   333000000U),
   PLLDE(    41,    2,   336000000U),
   PLLDE(   112,    7,   339000000U),
   PLLDE(    56,    3,   342000000U),
   PLLDE(   114,    7,   345000000U),
   PLLDE(    28,    1,   348000000U),
   PLLDE(   116,    7,   351000000U),
   PLLDE(    58,    3,   354000000U),
   PLLDE(   118,    7,   357000000U),
   PLLDE(    29,    1,   360000000U),
   PLLDE(   120,    7,   363000000U),
   PLLDE(    60,    3,   366000000U),
   PLLDE(   122,    7,   369000000U),
   PLLDE(    61,    3,   372000000U),
   PLLDE(   124,    7,   375000000U),
   PLLDE(    62,    3,   378000000U),
   PLLDE(   126,    7,   381000000U),
   PLLDE(    63,    3,   384000000U),
   PLLDE(    64,    3,   390000000U),
   PLLDE(    32,    1,   396000000U),
   PLLDE(    66,    3,   402000000U),
   PLLDE(    67,    3,   408000000U),
   PLLDE(    68,    3,   414000000U),
   PLLDE(    34,    1,   420000000U),
   PLLDE(    70,    3,   426000000U),
   PLLDE(    35,    1,   432000000U),
   PLLDE(    72,    3,   438000000U),
   PLLDE(    36,    1,   444000000U),
   PLLDE(    74,    3,   450000000U),
   PLLDE(    18,    0,   456000000U),
   PLLDE(    76,    3,   462000000U),
   PLLDE(    38,    1,   468000000U),
   PLLDE(    78,    3,   474000000U),
   PLLDE(    19,    0,   480000000U),
   PLLDE(    80,    3,   486000000U),
   PLLDE(    40,    1,   492000000U),
   PLLDE(    82,    3,   498000000U),
   PLLDE(    20,    0,   504000000U),
   PLLDE(    84,    3,   510000000U),
   PLLDE(    85,    3,   516000000U),
   PLLDE(    21,    0,   528000000U),
   PLLDE(    88,    3,   534000000U),
   PLLDE(    89,    3,   540000000U),
   PLLDE(    90,    3,   546000000U),
   PLLDE(    22,    0,   552000000U),
   PLLDE(    92,    3,   558000000U),
   PLLDE(    93,    3,   564000000U),
   PLLDE(    94,    3,   570000000U),
   PLLDE(    23,    0,   576000000U),
   PLLDE(    96,    3,   582000000U),
   PLLDE(    97,    3,   588000000U),
   PLLDE(    98,    3,   594000000U),
   PLLDE(    24,    0,   600000000U),
   PLLDE(   100,    3,   606000000U),
   PLLDE(   101,    3,   612000000U),
   PLLDE(   102,    3,   618000000U),
   PLLDE(    25,    0,   624000000U),
   PLLDE(   104,    3,   630000000U),
   PLLDE(   105,    3,   636000000U),
   PLLDE(   106,    3,   642000000U),
   PLLDE(    26,    0,   648000000U),
   PLLDE(   108,    3,   654000000U),
   PLLDE(   109,    3,   660000000U),
   PLLDE(   110,    3,   666000000U),
   PLLDE(    27,    0,   672000000U),
   PLLDE(   112,    3,   678000000U),
   PLLDE(   113,    3,   684000000U),
   PLLDE(   114,    3,   690000000U),
   PLLDE(    28,    0,   696000000U),
   PLLDE(   116,    3,   702000000U),
   PLLDE(   117,    3,   708000000U),
   PLLDE(   118,    3,   714000000U),
   PLLDE(    29,    0,   720000000U),
   PLLDE(   120,    3,   726000000U),
   PLLDE(   121,    3,   732000000U),
   PLLDE(   122,    3,   738000000U),
   PLLDE(    30,    0,   744000000U),
   PLLDE(   124,    3,   750000000U),
   PLLDE(   125,    3,   756000000U),
   PLLDE(   126,    3,   762000000U),
   PLLDE(    31,    0,   768000000U),
   PLLDE(    32,    0,   792000000U),
   PLLDE(    33,    0,   816000000U),
   PLLDE(    34,    0,   840000000U),
   PLLDE(    35,    0,   864000000U),
   PLLDE(    36,    0,   888000000U),
   PLLDE(    37,    0,   912000000U),
   PLLDE(    39,    0,   960000000U),
   PLLDE(    40,    0,   984000000U),
   PLLDE(    41,    0,  1008000000U),
};

static unsigned int pllcpu_max,pllvideo_max;
static unsigned int pllve_max,pllddr_max;
static unsigned int pllperiph0_max,pllgpu_max;
static unsigned int pllperiph1_max,pllde_max;
void sunxi_clk_factor_initlimits(void)
{
    pllcpu_max=factor_pllcpu_tbl[ARRAY_SIZE(factor_pllcpu_tbl)-1].freq;
    pllvideo_max=factor_pllvideo_tbl[ARRAY_SIZE(factor_pllvideo_tbl)-1].freq;
    pllve_max=factor_pllve_tbl[ARRAY_SIZE(factor_pllve_tbl)-1].freq;
    pllddr_max=factor_pllddr_tbl[ARRAY_SIZE(factor_pllddr_tbl)-1].freq;
    pllperiph0_max=factor_pllperiph0_tbl[ARRAY_SIZE(factor_pllperiph0_tbl)-1].freq;
    pllgpu_max=factor_pllgpu_tbl[ARRAY_SIZE(factor_pllgpu_tbl)-1].freq;
    pllperiph1_max=factor_pllperiph1_tbl[ARRAY_SIZE(factor_pllperiph1_tbl)-1].freq;
    pllde_max=factor_pllde_tbl[ARRAY_SIZE(factor_pllde_tbl)-1].freq;
}