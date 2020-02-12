/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mem.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 07:24:45 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/05 08:20:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEM_H
# define FT_MEM_H

# include <stddef.h>
# include <stdint.h>
# include <stdarg.h>
# include <stdlib.h>
# include "ft_fio.h"

/*
** ==============
** >            <
** >>> MEMORY <<<
** >            <
** ==============
*/

/*
** ARRLEN:	len of an array; only for stack array
** BYTE:	# of bit for a byte
** WORD:	# of bit for a word
** BIT8:	# of byte for type uint8_t
** BIT16:	# of byte for type uint16_t
** BIT32:	# of byte for type uint32_t
** BIT64:	# of byte for type uint64_t
*/

# define ARRLEN(a)	(sizeof(a) / sizeof(a[0]))
# define BYTE		8
# define WORD		32
# define BIT8		(sizeof(uint8_t))
# define BIT16		(sizeof(uint16_t))
# define BIT32		(sizeof(uint32_t))
# define BIT64		(sizeof(uint64_t))

typedef union		u_uint
{
	uint8_t			uint8;
	uint16_t		uint16;
	uint32_t		uint32;
	uint64_t		uint64;
}					t_uint;

typedef union		u_ptr
{
	uint8_t			*uint8p;
	uint16_t		*uint16p;
	uint32_t		*uint32p;
	uint64_t		*uint64p;
}					t_ptr;

void				*ft_memalloc(size_t size);
void				*ft_memrealloc(void **ptr, size_t oldsize, size_t newsize);
void				ft_memfree(void **p);

int					ft_memcmp(const void *s1, const void *s2, size_t n);

void				*ft_memchr(const void *s, int c, size_t n);

void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);

void				*ft_memmove(void *dst, const void *src, size_t len);
void				ft_memswap(void *p1, void *p2, size_t byte);

void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);

unsigned int		ft_getbits(unsigned int x, int p, int n);
unsigned int		ft_setbits(unsigned int x, int p, int n, unsigned int y);
unsigned int		ft_invertbits(unsigned int x, int p, int n);
void				ft_putbits(void *x, size_t bit);

uint32_t			ft_ptrhash(void *p);

#endif
