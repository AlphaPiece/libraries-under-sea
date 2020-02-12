/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putbits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:34:47 by zwang             #+#    #+#             */
/*   Updated: 2019/06/01 09:16:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

static void	setb(void *x, size_t byte, t_ptr *p, t_uint *un)
{
	if (byte == BIT64)
	{
		p->uint64p = (uint64_t *)x;
		un->uint64 = 1;
		un->uint64 = un->uint64 << 63;
	}
	else if (byte == BIT32)
	{
		p->uint32p = (uint32_t *)x;
		un->uint32 = 1 << 31;
	}
	else if (byte == BIT16)
	{
		p->uint16p = (uint16_t *)x;
		un->uint16 = 1 << 15;
	}
	else if (byte == BIT8)
	{
		p->uint8p = (uint8_t *)x;
		un->uint8 = 1 << 7;
	}
	else
		ft_dprintf(2, "error: invalid input for byte\n");
}

static void	putb(void *x, size_t byte, t_ptr *p, t_uint *un)
{
	setb(x, byte, p, un);
	if (byte == BIT64)
		while (un->uint64 > 0)
		{
			ft_putchar((*p->uint64p & un->uint64) ? '1' : '0');
			un->uint64 /= 2;
		}
	else if (byte == BIT32)
		while (un->uint32 > 0)
		{
			ft_putchar((*p->uint32p & un->uint32) ? '1' : '0');
			un->uint32 /= 2;
		}
	else if (byte == BIT16)
		while (un->uint16 > 0)
		{
			ft_putchar((*p->uint16p & un->uint16) ? '1' : '0');
			un->uint16 /= 2;
		}
	else if (byte == BIT8)
		while (un->uint8 > 0)
		{
			ft_putchar((*p->uint8p & un->uint8) ? '1' : '0');
			un->uint8 /= 2;
		}
}

void		ft_putbits(void *x, size_t n)
{
	t_ptr	p;
	t_uint	un;

	if (n >= BIT64 * BYTE)
	{
		putb(x, BIT64, &p, &un);
		ft_putbits(++p.uint64p, n - BIT64 * BYTE);
	}
	else if (n >= BIT32 * BYTE)
	{
		putb(x, BIT32, &p, &un);
		ft_putbits(++p.uint32p, n - BIT32 * BYTE);
	}
	else if (n >= BIT16 * BYTE)
	{
		putb(x, BIT16, &p, &un);
		ft_putbits(++p.uint16p, n - BIT16 * BYTE);
	}
	else if (n >= BIT8 * BYTE)
	{
		putb(x, BIT8, &p, &un);
		ft_putbits(++p.uint8p, n - BIT8 * BYTE);
	}
	else
		ft_putchar('\n');
}
