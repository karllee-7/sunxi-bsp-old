/*
 * include/linux/netfilter/xt_quota2.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef _XT_QUOTA_H
#define _XT_QUOTA_H

enum xt_quota_flags {
	XT_QUOTA_INVERT    = 1 << 0,
	XT_QUOTA_GROW      = 1 << 1,
	XT_QUOTA_PACKET    = 1 << 2,
	XT_QUOTA_NO_CHANGE = 1 << 3,
	XT_QUOTA_MASK      = 0x0F,
};

struct xt_quota_counter;

struct xt_quota_mtinfo2 {
	char name[15];
	u_int8_t flags;

	/* Comparison-invariant */
	aligned_u64 quota;

	/* Used internally by the kernel */
	struct xt_quota_counter *master __attribute__((aligned(8)));
};

#endif /* _XT_QUOTA_H */
