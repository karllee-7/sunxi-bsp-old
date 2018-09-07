/*
 * include/trace/events/smp.h
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#undef TRACE_SYSTEM
#define TRACE_SYSTEM smp

#if !defined(_TRACE_SMP_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_SMP_H

#include <linux/tracepoint.h>
#ifndef __smp_call_func_t
typedef void (*__smp_call_func_t)(void *info);
#define __smp_call_func_t __smp_call_func_t
#endif

DECLARE_EVENT_CLASS(smp_call_class,

	TP_PROTO(__smp_call_func_t fnc),

	TP_ARGS(fnc),

	TP_STRUCT__entry(
		__field( void *, func )
	),

	TP_fast_assign(
		__entry->func = fnc;
	),

	TP_printk("func=%pf", __entry->func)
);

/**
 * smp_call_func_entry - called in the generic smp-cross-call-handler
 * 						 immediately before calling the destination
 * 						 function
 * @func:  function pointer
 *
 * When used in combination with the smp_call_func_exit tracepoint
 * we can determine the cross-call runtime.
 */
DEFINE_EVENT(smp_call_class, smp_call_func_entry,

	TP_PROTO(__smp_call_func_t fnc),

	TP_ARGS(fnc)
);

/**
 * smp_call_func_exit - called in the generic smp-cross-call-handler
 * 						immediately after the destination function
 * 						returns
 * @func:  function pointer
 *
 * When used in combination with the smp_call_entry tracepoint
 * we can determine the cross-call runtime.
 */
DEFINE_EVENT(smp_call_class, smp_call_func_exit,

	TP_PROTO(__smp_call_func_t fnc),

	TP_ARGS(fnc)
);

/**
 * smp_call_func_send - called as destination function is set
 * 						in the per-cpu storage
 * @func:  function pointer
 * @dest:  cpu to send to
 *
 * When used in combination with the smp_cross_call_entry tracepoint
 * we can determine the call-to-run latency.
 */
TRACE_EVENT(smp_call_func_send,

	TP_PROTO(__smp_call_func_t func, int dest),

	TP_ARGS(func, dest),

	TP_STRUCT__entry(
		__field(	void * 	,	func )
		__field(	int		,	dest )
	),

	TP_fast_assign(
		__entry->func = func;
		__entry->dest = dest;
	),

	TP_printk("dest=%d func=%pf", __entry->dest,
			__entry->func)
);

#endif /*  _TRACE_SMP_H */

/* This part must be outside protection */
#include <trace/define_trace.h>
