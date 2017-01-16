/*
 * arch/arm/mach-exynos/include/mach/cci.h
 *
 * Copyright(c) 2013-2015 Allwinnertech Co., Ltd.
 *         http://www.allwinnertech.com
 *
 * Author: sunny <sunny@allwinnertech.com>
 *
 * allwinner sunxi soc platform CCI(Cache Coherent Interconnect) interfaces.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __ASM_ARCH_CCI_H
#define __ASM_ARCH_CCI_H __FILE__

extern void enable_cci_snoops(unsigned int cluster);
extern void disable_cci_snoops(unsigned int cluster);

#endif /* __ASM_ARCH_CCI_H */
