/*
 * include/linux/kmalloc_sizes.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#if (PAGE_SIZE == 4096)
	CACHE(32)
#endif
	CACHE(64)
#if L1_CACHE_BYTES < 64
	CACHE(96)
#endif
	CACHE(128)
#if L1_CACHE_BYTES < 128
	CACHE(192)
#endif
	CACHE(256)
	CACHE(512)
	CACHE(1024)
	CACHE(2048)
	CACHE(4096)
	CACHE(8192)
	CACHE(16384)
	CACHE(32768)
	CACHE(65536)
	CACHE(131072)
#if KMALLOC_MAX_SIZE >= 262144
	CACHE(262144)
#endif
#if KMALLOC_MAX_SIZE >= 524288
	CACHE(524288)
#endif
#if KMALLOC_MAX_SIZE >= 1048576
	CACHE(1048576)
#endif
#if KMALLOC_MAX_SIZE >= 2097152
	CACHE(2097152)
#endif
#if KMALLOC_MAX_SIZE >= 4194304
	CACHE(4194304)
#endif
#if KMALLOC_MAX_SIZE >= 8388608
	CACHE(8388608)
#endif
#if KMALLOC_MAX_SIZE >= 16777216
	CACHE(16777216)
#endif
#if KMALLOC_MAX_SIZE >= 33554432
	CACHE(33554432)
#endif
