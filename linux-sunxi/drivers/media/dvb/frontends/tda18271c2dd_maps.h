/*
 * drivers/media/dvb/frontends/tda18271c2dd_maps.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
enum HF_S {
	HF_None = 0, HF_B, HF_DK, HF_G, HF_I, HF_L, HF_L1, HF_MN, HF_FM_Radio,
	HF_AnalogMax, HF_DVBT_6MHZ, HF_DVBT_7MHZ, HF_DVBT_8MHZ,
	HF_DVBT, HF_ATSC,  HF_DVBC_6MHZ,  HF_DVBC_7MHZ,
	HF_DVBC_8MHZ, HF_DVBC
};

struct SStandardParam m_StandardTable[] = {
	{       0,        0, 0x00, 0x00 },    /* HF_None */
	{ 6000000,  7000000, 0x1D, 0x2C },    /* HF_B, */
	{ 6900000,  8000000, 0x1E, 0x2C },    /* HF_DK, */
	{ 7100000,  8000000, 0x1E, 0x2C },    /* HF_G, */
	{ 7250000,  8000000, 0x1E, 0x2C },    /* HF_I, */
	{ 6900000,  8000000, 0x1E, 0x2C },    /* HF_L, */
	{ 1250000,  8000000, 0x1E, 0x2C },    /* HF_L1, */
	{ 5400000,  6000000, 0x1C, 0x2C },    /* HF_MN, */
	{ 1250000,   500000, 0x18, 0x2C },    /* HF_FM_Radio, */
	{       0,        0, 0x00, 0x00 },    /* HF_AnalogMax (Unused) */
	{ 3300000,  6000000, 0x1C, 0x58 },    /* HF_DVBT_6MHZ */
	{ 3500000,  7000000, 0x1C, 0x37 },    /* HF_DVBT_7MHZ */
	{ 4000000,  8000000, 0x1D, 0x37 },    /* HF_DVBT_8MHZ */
	{       0,        0, 0x00, 0x00 },    /* HF_DVBT (Unused) */
	{ 5000000,  6000000, 0x1C, 0x37 },    /* HF_ATSC  (center = 3.25 MHz) */
	{ 4000000,  6000000, 0x1D, 0x58 },    /* HF_DVBC_6MHZ (Chicago) */
	{ 4500000,  7000000, 0x1E, 0x37 },    /* HF_DVBC_7MHZ (not documented by NXP) */
	{ 5000000,  8000000, 0x1F, 0x37 },    /* HF_DVBC_8MHZ */
	{       0,        0, 0x00, 0x00 },    /* HF_DVBC (Unused) */
};

struct SMap  m_BP_Filter_Map[] = {
	{   62000000,  0x00 },
	{   84000000,  0x01 },
	{  100000000,  0x02 },
	{  140000000,  0x03 },
	{  170000000,  0x04 },
	{  180000000,  0x05 },
	{  865000000,  0x06 },
	{          0,  0x00 },    /* Table End */
};

static struct SMapI m_RF_Cal_Map[] = {
	{   41000000,  0x0F },
	{   43000000,  0x1C },
	{   45000000,  0x2F },
	{   46000000,  0x39 },
	{   47000000,  0x40 },
	{   47900000,  0x50 },
	{   49100000,  0x16 },
	{   50000000,  0x18 },
	{   51000000,  0x20 },
	{   53000000,  0x28 },
	{   55000000,  0x2B },
	{   56000000,  0x32 },
	{   57000000,  0x35 },
	{   58000000,  0x3E },
	{   59000000,  0x43 },
	{   60000000,  0x4E },
	{   61100000,  0x55 },
	{   63000000,  0x0F },
	{   64000000,  0x11 },
	{   65000000,  0x12 },
	{   66000000,  0x15 },
	{   67000000,  0x16 },
	{   68000000,  0x17 },
	{   70000000,  0x19 },
	{   71000000,  0x1C },
	{   72000000,  0x1D },
	{   73000000,  0x1F },
	{   74000000,  0x20 },
	{   75000000,  0x21 },
	{   76000000,  0x24 },
	{   77000000,  0x25 },
	{   78000000,  0x27 },
	{   80000000,  0x28 },
	{   81000000,  0x29 },
	{   82000000,  0x2D },
	{   83000000,  0x2E },
	{   84000000,  0x2F },
	{   85000000,  0x31 },
	{   86000000,  0x33 },
	{   87000000,  0x34 },
	{   88000000,  0x35 },
	{   89000000,  0x37 },
	{   90000000,  0x38 },
	{   91000000,  0x39 },
	{   93000000,  0x3C },
	{   94000000,  0x3E },
	{   95000000,  0x3F },
	{   96000000,  0x40 },
	{   97000000,  0x42 },
	{   99000000,  0x45 },
	{  100000000,  0x46 },
	{  102000000,  0x48 },
	{  103000000,  0x4A },
	{  105000000,  0x4D },
	{  106000000,  0x4E },
	{  107000000,  0x50 },
	{  108000000,  0x51 },
	{  110000000,  0x54 },
	{  111000000,  0x56 },
	{  112000000,  0x57 },
	{  113000000,  0x58 },
	{  114000000,  0x59 },
	{  115000000,  0x5C },
	{  116000000,  0x5D },
	{  117000000,  0x5F },
	{  119000000,  0x60 },
	{  120000000,  0x64 },
	{  121000000,  0x65 },
	{  122000000,  0x66 },
	{  123000000,  0x68 },
	{  124000000,  0x69 },
	{  125000000,  0x6C },
	{  126000000,  0x6D },
	{  127000000,  0x6E },
	{  128000000,  0x70 },
	{  129000000,  0x71 },
	{  130000000,  0x75 },
	{  131000000,  0x77 },
	{  132000000,  0x78 },
	{  133000000,  0x7B },
	{  134000000,  0x7E },
	{  135000000,  0x81 },
	{  136000000,  0x82 },
	{  137000000,  0x87 },
	{  138000000,  0x88 },
	{  139000000,  0x8D },
	{  140000000,  0x8E },
	{  141000000,  0x91 },
	{  142000000,  0x95 },
	{  143000000,  0x9A },
	{  144000000,  0x9D },
	{  145000000,  0xA1 },
	{  146000000,  0xA2 },
	{  147000000,  0xA4 },
	{  148000000,  0xA9 },
	{  149000000,  0xAE },
	{  150000000,  0xB0 },
	{  151000000,  0xB1 },
	{  152000000,  0xB7 },
	{  152600000,  0xBD },
	{  154000000,  0x20 },
	{  155000000,  0x22 },
	{  156000000,  0x24 },
	{  157000000,  0x25 },
	{  158000000,  0x27 },
	{  159000000,  0x29 },
	{  160000000,  0x2C },
	{  161000000,  0x2D },
	{  163000000,  0x2E },
	{  164000000,  0x2F },
	{  164700000,  0x30 },
	{  166000000,  0x11 },
	{  167000000,  0x12 },
	{  168000000,  0x13 },
	{  169000000,  0x14 },
	{  170000000,  0x15 },
	{  172000000,  0x16 },
	{  173000000,  0x17 },
	{  174000000,  0x18 },
	{  175000000,  0x1A },
	{  176000000,  0x1B },
	{  178000000,  0x1D },
	{  179000000,  0x1E },
	{  180000000,  0x1F },
	{  181000000,  0x20 },
	{  182000000,  0x21 },
	{  183000000,  0x22 },
	{  184000000,  0x24 },
	{  185000000,  0x25 },
	{  186000000,  0x26 },
	{  187000000,  0x27 },
	{  188000000,  0x29 },
	{  189000000,  0x2A },
	{  190000000,  0x2C },
	{  191000000,  0x2D },
	{  192000000,  0x2E },
	{  193000000,  0x2F },
	{  194000000,  0x30 },
	{  195000000,  0x33 },
	{  196000000,  0x35 },
	{  198000000,  0x36 },
	{  200000000,  0x38 },
	{  201000000,  0x3C },
	{  202000000,  0x3D },
	{  203500000,  0x3E },
	{  206000000,  0x0E },
	{  208000000,  0x0F },
	{  212000000,  0x10 },
	{  216000000,  0x11 },
	{  217000000,  0x12 },
	{  218000000,  0x13 },
	{  220000000,  0x14 },
	{  222000000,  0x15 },
	{  225000000,  0x16 },
	{  228000000,  0x17 },
	{  231000000,  0x18 },
	{  234000000,  0x19 },
	{  235000000,  0x1A },
	{  236000000,  0x1B },
	{  237000000,  0x1C },
	{  240000000,  0x1D },
	{  242000000,  0x1E },
	{  244000000,  0x1F },
	{  247000000,  0x20 },
	{  249000000,  0x21 },
	{  252000000,  0x22 },
	{  253000000,  0x23 },
	{  254000000,  0x24 },
	{  256000000,  0x25 },
	{  259000000,  0x26 },
	{  262000000,  0x27 },
	{  264000000,  0x28 },
	{  267000000,  0x29 },
	{  269000000,  0x2A },
	{  271000000,  0x2B },
	{  273000000,  0x2C },
	{  275000000,  0x2D },
	{  277000000,  0x2E },
	{  279000000,  0x2F },
	{  282000000,  0x30 },
	{  284000000,  0x31 },
	{  286000000,  0x32 },
	{  287000000,  0x33 },
	{  290000000,  0x34 },
	{  293000000,  0x35 },
	{  295000000,  0x36 },
	{  297000000,  0x37 },
	{  300000000,  0x38 },
	{  303000000,  0x39 },
	{  305000000,  0x3A },
	{  306000000,  0x3B },
	{  307000000,  0x3C },
	{  310000000,  0x3D },
	{  312000000,  0x3E },
	{  315000000,  0x3F },
	{  318000000,  0x40 },
	{  320000000,  0x41 },
	{  323000000,  0x42 },
	{  324000000,  0x43 },
	{  325000000,  0x44 },
	{  327000000,  0x45 },
	{  331000000,  0x46 },
	{  334000000,  0x47 },
	{  337000000,  0x48 },
	{  339000000,  0x49 },
	{  340000000,  0x4A },
	{  341000000,  0x4B },
	{  343000000,  0x4C },
	{  345000000,  0x4D },
	{  349000000,  0x4E },
	{  352000000,  0x4F },
	{  353000000,  0x50 },
	{  355000000,  0x51 },
	{  357000000,  0x52 },
	{  359000000,  0x53 },
	{  361000000,  0x54 },
	{  362000000,  0x55 },
	{  364000000,  0x56 },
	{  368000000,  0x57 },
	{  370000000,  0x58 },
	{  372000000,  0x59 },
	{  375000000,  0x5A },
	{  376000000,  0x5B },
	{  377000000,  0x5C },
	{  379000000,  0x5D },
	{  382000000,  0x5E },
	{  384000000,  0x5F },
	{  385000000,  0x60 },
	{  386000000,  0x61 },
	{  388000000,  0x62 },
	{  390000000,  0x63 },
	{  393000000,  0x64 },
	{  394000000,  0x65 },
	{  396000000,  0x66 },
	{  397000000,  0x67 },
	{  398000000,  0x68 },
	{  400000000,  0x69 },
	{  402000000,  0x6A },
	{  403000000,  0x6B },
	{  407000000,  0x6C },
	{  408000000,  0x6D },
	{  409000000,  0x6E },
	{  410000000,  0x6F },
	{  411000000,  0x70 },
	{  412000000,  0x71 },
	{  413000000,  0x72 },
	{  414000000,  0x73 },
	{  417000000,  0x74 },
	{  418000000,  0x75 },
	{  420000000,  0x76 },
	{  422000000,  0x77 },
	{  423000000,  0x78 },
	{  424000000,  0x79 },
	{  427000000,  0x7A },
	{  428000000,  0x7B },
	{  429000000,  0x7D },
	{  432000000,  0x7F },
	{  434000000,  0x80 },
	{  435000000,  0x81 },
	{  436000000,  0x83 },
	{  437000000,  0x84 },
	{  438000000,  0x85 },
	{  439000000,  0x86 },
	{  440000000,  0x87 },
	{  441000000,  0x88 },
	{  442000000,  0x89 },
	{  445000000,  0x8A },
	{  446000000,  0x8B },
	{  447000000,  0x8C },
	{  448000000,  0x8E },
	{  449000000,  0x8F },
	{  450000000,  0x90 },
	{  452000000,  0x91 },
	{  453000000,  0x93 },
	{  454000000,  0x94 },
	{  456000000,  0x96 },
	{  457800000,  0x98 },
	{  461000000,  0x11 },
	{  468000000,  0x12 },
	{  472000000,  0x13 },
	{  473000000,  0x14 },
	{  474000000,  0x15 },
	{  481000000,  0x16 },
	{  486000000,  0x17 },
	{  491000000,  0x18 },
	{  498000000,  0x19 },
	{  499000000,  0x1A },
	{  501000000,  0x1B },
	{  506000000,  0x1C },
	{  511000000,  0x1D },
	{  516000000,  0x1E },
	{  520000000,  0x1F },
	{  521000000,  0x20 },
	{  525000000,  0x21 },
	{  529000000,  0x22 },
	{  533000000,  0x23 },
	{  539000000,  0x24 },
	{  541000000,  0x25 },
	{  547000000,  0x26 },
	{  549000000,  0x27 },
	{  551000000,  0x28 },
	{  556000000,  0x29 },
	{  561000000,  0x2A },
	{  563000000,  0x2B },
	{  565000000,  0x2C },
	{  569000000,  0x2D },
	{  571000000,  0x2E },
	{  577000000,  0x2F },
	{  580000000,  0x30 },
	{  582000000,  0x31 },
	{  584000000,  0x32 },
	{  588000000,  0x33 },
	{  591000000,  0x34 },
	{  596000000,  0x35 },
	{  598000000,  0x36 },
	{  603000000,  0x37 },
	{  604000000,  0x38 },
	{  606000000,  0x39 },
	{  612000000,  0x3A },
	{  615000000,  0x3B },
	{  617000000,  0x3C },
	{  621000000,  0x3D },
	{  622000000,  0x3E },
	{  625000000,  0x3F },
	{  632000000,  0x40 },
	{  633000000,  0x41 },
	{  634000000,  0x42 },
	{  642000000,  0x43 },
	{  643000000,  0x44 },
	{  647000000,  0x45 },
	{  650000000,  0x46 },
	{  652000000,  0x47 },
	{  657000000,  0x48 },
	{  661000000,  0x49 },
	{  662000000,  0x4A },
	{  665000000,  0x4B },
	{  667000000,  0x4C },
	{  670000000,  0x4D },
	{  673000000,  0x4E },
	{  676000000,  0x4F },
	{  677000000,  0x50 },
	{  681000000,  0x51 },
	{  683000000,  0x52 },
	{  686000000,  0x53 },
	{  688000000,  0x54 },
	{  689000000,  0x55 },
	{  691000000,  0x56 },
	{  695000000,  0x57 },
	{  698000000,  0x58 },
	{  703000000,  0x59 },
	{  704000000,  0x5A },
	{  705000000,  0x5B },
	{  707000000,  0x5C },
	{  710000000,  0x5D },
	{  712000000,  0x5E },
	{  717000000,  0x5F },
	{  718000000,  0x60 },
	{  721000000,  0x61 },
	{  722000000,  0x62 },
	{  723000000,  0x63 },
	{  725000000,  0x64 },
	{  727000000,  0x65 },
	{  730000000,  0x66 },
	{  732000000,  0x67 },
	{  735000000,  0x68 },
	{  740000000,  0x69 },
	{  741000000,  0x6A },
	{  742000000,  0x6B },
	{  743000000,  0x6C },
	{  745000000,  0x6D },
	{  747000000,  0x6E },
	{  748000000,  0x6F },
	{  750000000,  0x70 },
	{  752000000,  0x71 },
	{  754000000,  0x72 },
	{  757000000,  0x73 },
	{  758000000,  0x74 },
	{  760000000,  0x75 },
	{  763000000,  0x76 },
	{  764000000,  0x77 },
	{  766000000,  0x78 },
	{  767000000,  0x79 },
	{  768000000,  0x7A },
	{  773000000,  0x7B },
	{  774000000,  0x7C },
	{  776000000,  0x7D },
	{  777000000,  0x7E },
	{  778000000,  0x7F },
	{  779000000,  0x80 },
	{  781000000,  0x81 },
	{  783000000,  0x82 },
	{  784000000,  0x83 },
	{  785000000,  0x84 },
	{  786000000,  0x85 },
	{  793000000,  0x86 },
	{  794000000,  0x87 },
	{  795000000,  0x88 },
	{  797000000,  0x89 },
	{  799000000,  0x8A },
	{  801000000,  0x8B },
	{  802000000,  0x8C },
	{  803000000,  0x8D },
	{  804000000,  0x8E },
	{  810000000,  0x90 },
	{  811000000,  0x91 },
	{  812000000,  0x92 },
	{  814000000,  0x93 },
	{  816000000,  0x94 },
	{  817000000,  0x96 },
	{  818000000,  0x97 },
	{  820000000,  0x98 },
	{  821000000,  0x99 },
	{  822000000,  0x9A },
	{  828000000,  0x9B },
	{  829000000,  0x9D },
	{  830000000,  0x9F },
	{  831000000,  0xA0 },
	{  833000000,  0xA1 },
	{  835000000,  0xA2 },
	{  836000000,  0xA3 },
	{  837000000,  0xA4 },
	{  838000000,  0xA6 },
	{  840000000,  0xA8 },
	{  842000000,  0xA9 },
	{  845000000,  0xAA },
	{  846000000,  0xAB },
	{  847000000,  0xAD },
	{  848000000,  0xAE },
	{  852000000,  0xAF },
	{  853000000,  0xB0 },
	{  858000000,  0xB1 },
	{  860000000,  0xB2 },
	{  861000000,  0xB3 },
	{  862000000,  0xB4 },
	{  863000000,  0xB6 },
	{  864000000,  0xB8 },
	{  865000000,  0xB9 },
	{          0,  0x00 },    /* Table End */
};


static struct SMap2  m_KM_Map[] = {
	{   47900000,  3, 2 },
	{   61100000,  3, 1 },
	{  350000000,  3, 0 },
	{  720000000,  2, 1 },
	{  865000000,  3, 3 },
	{          0,  0x00 },    /* Table End */
};

static struct SMap2 m_Main_PLL_Map[] = {
	{  33125000, 0x57, 0xF0 },
	{  35500000, 0x56, 0xE0 },
	{  38188000, 0x55, 0xD0 },
	{  41375000, 0x54, 0xC0 },
	{  45125000, 0x53, 0xB0 },
	{  49688000, 0x52, 0xA0 },
	{  55188000, 0x51, 0x90 },
	{  62125000, 0x50, 0x80 },
	{  66250000, 0x47, 0x78 },
	{  71000000, 0x46, 0x70 },
	{  76375000, 0x45, 0x68 },
	{  82750000, 0x44, 0x60 },
	{  90250000, 0x43, 0x58 },
	{  99375000, 0x42, 0x50 },
	{ 110375000, 0x41, 0x48 },
	{ 124250000, 0x40, 0x40 },
	{ 132500000, 0x37, 0x3C },
	{ 142000000, 0x36, 0x38 },
	{ 152750000, 0x35, 0x34 },
	{ 165500000, 0x34, 0x30 },
	{ 180500000, 0x33, 0x2C },
	{ 198750000, 0x32, 0x28 },
	{ 220750000, 0x31, 0x24 },
	{ 248500000, 0x30, 0x20 },
	{ 265000000, 0x27, 0x1E },
	{ 284000000, 0x26, 0x1C },
	{ 305500000, 0x25, 0x1A },
	{ 331000000, 0x24, 0x18 },
	{ 361000000, 0x23, 0x16 },
	{ 397500000, 0x22, 0x14 },
	{ 441500000, 0x21, 0x12 },
	{ 497000000, 0x20, 0x10 },
	{ 530000000, 0x17, 0x0F },
	{ 568000000, 0x16, 0x0E },
	{ 611000000, 0x15, 0x0D },
	{ 662000000, 0x14, 0x0C },
	{ 722000000, 0x13, 0x0B },
	{ 795000000, 0x12, 0x0A },
	{ 883000000, 0x11, 0x09 },
	{ 994000000, 0x10, 0x08 },
	{         0, 0x00, 0x00 },    /* Table End */
};

static struct SMap2 m_Cal_PLL_Map[] = {
	{  33813000, 0xDD, 0xD0 },
	{  36625000, 0xDC, 0xC0 },
	{  39938000, 0xDB, 0xB0 },
	{  43938000, 0xDA, 0xA0 },
	{  48813000, 0xD9, 0x90 },
	{  54938000, 0xD8, 0x80 },
	{  62813000, 0xD3, 0x70 },
	{  67625000, 0xCD, 0x68 },
	{  73250000, 0xCC, 0x60 },
	{  79875000, 0xCB, 0x58 },
	{  87875000, 0xCA, 0x50 },
	{  97625000, 0xC9, 0x48 },
	{ 109875000, 0xC8, 0x40 },
	{ 125625000, 0xC3, 0x38 },
	{ 135250000, 0xBD, 0x34 },
	{ 146500000, 0xBC, 0x30 },
	{ 159750000, 0xBB, 0x2C },
	{ 175750000, 0xBA, 0x28 },
	{ 195250000, 0xB9, 0x24 },
	{ 219750000, 0xB8, 0x20 },
	{ 251250000, 0xB3, 0x1C },
	{ 270500000, 0xAD, 0x1A },
	{ 293000000, 0xAC, 0x18 },
	{ 319500000, 0xAB, 0x16 },
	{ 351500000, 0xAA, 0x14 },
	{ 390500000, 0xA9, 0x12 },
	{ 439500000, 0xA8, 0x10 },
	{ 502500000, 0xA3, 0x0E },
	{ 541000000, 0x9D, 0x0D },
	{ 586000000, 0x9C, 0x0C },
	{ 639000000, 0x9B, 0x0B },
	{ 703000000, 0x9A, 0x0A },
	{ 781000000, 0x99, 0x09 },
	{ 879000000, 0x98, 0x08 },
	{         0, 0x00, 0x00 },    /* Table End */
};

static struct SMap  m_GainTaper_Map[] = {
	{  45400000, 0x1F },
	{  45800000, 0x1E },
	{  46200000, 0x1D },
	{  46700000, 0x1C },
	{  47100000, 0x1B },
	{  47500000, 0x1A },
	{  47900000, 0x19 },
	{  49600000, 0x17 },
	{  51200000, 0x16 },
	{  52900000, 0x15 },
	{  54500000, 0x14 },
	{  56200000, 0x13 },
	{  57800000, 0x12 },
	{  59500000, 0x11 },
	{  61100000, 0x10 },
	{  67600000, 0x0D },
	{  74200000, 0x0C },
	{  80700000, 0x0B },
	{  87200000, 0x0A },
	{  93800000, 0x09 },
	{ 100300000, 0x08 },
	{ 106900000, 0x07 },
	{ 113400000, 0x06 },
	{ 119900000, 0x05 },
	{ 126500000, 0x04 },
	{ 133000000, 0x03 },
	{ 139500000, 0x02 },
	{ 146100000, 0x01 },
	{ 152600000, 0x00 },
	{ 154300000, 0x1F },
	{ 156100000, 0x1E },
	{ 157800000, 0x1D },
	{ 159500000, 0x1C },
	{ 161200000, 0x1B },
	{ 163000000, 0x1A },
	{ 164700000, 0x19 },
	{ 170200000, 0x17 },
	{ 175800000, 0x16 },
	{ 181300000, 0x15 },
	{ 186900000, 0x14 },
	{ 192400000, 0x13 },
	{ 198000000, 0x12 },
	{ 203500000, 0x11 },
	{ 216200000, 0x14 },
	{ 228900000, 0x13 },
	{ 241600000, 0x12 },
	{ 254400000, 0x11 },
	{ 267100000, 0x10 },
	{ 279800000, 0x0F },
	{ 292500000, 0x0E },
	{ 305200000, 0x0D },
	{ 317900000, 0x0C },
	{ 330700000, 0x0B },
	{ 343400000, 0x0A },
	{ 356100000, 0x09 },
	{ 368800000, 0x08 },
	{ 381500000, 0x07 },
	{ 394200000, 0x06 },
	{ 406900000, 0x05 },
	{ 419700000, 0x04 },
	{ 432400000, 0x03 },
	{ 445100000, 0x02 },
	{ 457800000, 0x01 },
	{ 476300000, 0x19 },
	{ 494800000, 0x18 },
	{ 513300000, 0x17 },
	{ 531800000, 0x16 },
	{ 550300000, 0x15 },
	{ 568900000, 0x14 },
	{ 587400000, 0x13 },
	{ 605900000, 0x12 },
	{ 624400000, 0x11 },
	{ 642900000, 0x10 },
	{ 661400000, 0x0F },
	{ 679900000, 0x0E },
	{ 698400000, 0x0D },
	{ 716900000, 0x0C },
	{ 735400000, 0x0B },
	{ 753900000, 0x0A },
	{ 772500000, 0x09 },
	{ 791000000, 0x08 },
	{ 809500000, 0x07 },
	{ 828000000, 0x06 },
	{ 846500000, 0x05 },
	{ 865000000, 0x04 },
	{         0, 0x00 },    /* Table End */
};

static struct SMap m_RF_Cal_DC_Over_DT_Map[] = {
	{  47900000, 0x00 },
	{  55000000, 0x00 },
	{  61100000, 0x0A },
	{  64000000, 0x0A },
	{  82000000, 0x14 },
	{  84000000, 0x19 },
	{ 119000000, 0x1C },
	{ 124000000, 0x20 },
	{ 129000000, 0x2A },
	{ 134000000, 0x32 },
	{ 139000000, 0x39 },
	{ 144000000, 0x3E },
	{ 149000000, 0x3F },
	{ 152600000, 0x40 },
	{ 154000000, 0x40 },
	{ 164700000, 0x41 },
	{ 203500000, 0x32 },
	{ 353000000, 0x19 },
	{ 356000000, 0x1A },
	{ 359000000, 0x1B },
	{ 363000000, 0x1C },
	{ 366000000, 0x1D },
	{ 369000000, 0x1E },
	{ 373000000, 0x1F },
	{ 376000000, 0x20 },
	{ 379000000, 0x21 },
	{ 383000000, 0x22 },
	{ 386000000, 0x23 },
	{ 389000000, 0x24 },
	{ 393000000, 0x25 },
	{ 396000000, 0x26 },
	{ 399000000, 0x27 },
	{ 402000000, 0x28 },
	{ 404000000, 0x29 },
	{ 407000000, 0x2A },
	{ 409000000, 0x2B },
	{ 412000000, 0x2C },
	{ 414000000, 0x2D },
	{ 417000000, 0x2E },
	{ 419000000, 0x2F },
	{ 422000000, 0x30 },
	{ 424000000, 0x31 },
	{ 427000000, 0x32 },
	{ 429000000, 0x33 },
	{ 432000000, 0x34 },
	{ 434000000, 0x35 },
	{ 437000000, 0x36 },
	{ 439000000, 0x37 },
	{ 442000000, 0x38 },
	{ 444000000, 0x39 },
	{ 447000000, 0x3A },
	{ 449000000, 0x3B },
	{ 457800000, 0x3C },
	{ 465000000, 0x0F },
	{ 477000000, 0x12 },
	{ 483000000, 0x14 },
	{ 502000000, 0x19 },
	{ 508000000, 0x1B },
	{ 519000000, 0x1C },
	{ 522000000, 0x1D },
	{ 524000000, 0x1E },
	{ 534000000, 0x1F },
	{ 549000000, 0x20 },
	{ 554000000, 0x22 },
	{ 584000000, 0x24 },
	{ 589000000, 0x26 },
	{ 658000000, 0x27 },
	{ 664000000, 0x2C },
	{ 669000000, 0x2D },
	{ 699000000, 0x2E },
	{ 704000000, 0x30 },
	{ 709000000, 0x31 },
	{ 714000000, 0x32 },
	{ 724000000, 0x33 },
	{ 729000000, 0x36 },
	{ 739000000, 0x38 },
	{ 744000000, 0x39 },
	{ 749000000, 0x3B },
	{ 754000000, 0x3C },
	{ 759000000, 0x3D },
	{ 764000000, 0x3E },
	{ 769000000, 0x3F },
	{ 774000000, 0x40 },
	{ 779000000, 0x41 },
	{ 784000000, 0x43 },
	{ 789000000, 0x46 },
	{ 794000000, 0x48 },
	{ 799000000, 0x4B },
	{ 804000000, 0x4F },
	{ 809000000, 0x54 },
	{ 814000000, 0x59 },
	{ 819000000, 0x5D },
	{ 824000000, 0x61 },
	{ 829000000, 0x68 },
	{ 834000000, 0x6E },
	{ 839000000, 0x75 },
	{ 844000000, 0x7E },
	{ 849000000, 0x82 },
	{ 854000000, 0x84 },
	{ 859000000, 0x8F },
	{ 865000000, 0x9A },
	{         0, 0x00 },    /* Table End */
};


static struct SMap  m_IR_Meas_Map[] = {
	{ 200000000, 0x05 },
	{ 400000000, 0x06 },
	{ 865000000, 0x07 },
	{         0, 0x00 },    /* Table End */
};

static struct SMap2 m_CID_Target_Map[] = {
	{  46000000, 0x04, 18 },
	{  52200000, 0x0A, 15 },
	{  70100000, 0x01, 40 },
	{ 136800000, 0x18, 40 },
	{ 156700000, 0x18, 40 },
	{ 186250000, 0x0A, 40 },
	{ 230000000, 0x0A, 40 },
	{ 345000000, 0x18, 40 },
	{ 426000000, 0x0E, 40 },
	{ 489500000, 0x1E, 40 },
	{ 697500000, 0x32, 40 },
	{ 842000000, 0x3A, 40 },
	{         0, 0x00,  0 },    /* Table End */
};

static struct SRFBandMap  m_RF_Band_Map[7] = {
	{   47900000,   46000000,           0,          0},
	{   61100000,   52200000,           0,          0},
	{  152600000,   70100000,   136800000,          0},
	{  164700000,  156700000,           0,          0},
	{  203500000,  186250000,           0,          0},
	{  457800000,  230000000,   345000000,  426000000},
	{  865000000,  489500000,   697500000,  842000000},
};

u8 m_Thermometer_Map_1[16] = {
	60, 62, 66, 64,
	74, 72, 68, 70,
	90, 88, 84, 86,
	76, 78, 82, 80,
};

u8 m_Thermometer_Map_2[16] = {
	92, 94, 98, 96,
	106, 104, 100, 102,
	122, 120, 116, 118,
	108, 110, 114, 112,
};
