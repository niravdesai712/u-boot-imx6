/*
 * Copyright (c) 2011 The Chromium OS Authors.
 *
 * SPDX-License-Identifier:	GPL-2.0+ 
 */

#ifndef __ASM_SANDBOX_SYSTEM_H
#define __ASM_SANDBOX_SYSTEM_H

/* Define this as nops for sandbox architecture */
static inline void local_irq_save(unsigned flags __attribute__((unused)))
{
}

#define local_irq_enable()
#define local_irq_disable()
#define local_save_flags(x)
#define local_irq_restore(x)

#endif
