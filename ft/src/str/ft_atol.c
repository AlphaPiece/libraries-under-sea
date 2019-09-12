/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 19:38:07 by zwang             #+#    #+#             */
/*   Updated: 2019/06/01 12:09:00 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	atol_result(int neg, unsigned long n)
{
	long	long_lim;

	long_lim = 9223372036854775807;
	if (!neg && n >= (unsigned long)long_lim)
		return (long_lim);
	if (neg && n - 1 >= (unsigned long)long_lim)
		return (-long_lim - 1);
	return ((neg) ? (long)(~n + 1) : (long)n);
}

long		ft_atol(const char *s)
{
	unsigned long	n;
	t_bool			neg;

	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	neg = (*s == '-') ? true : false;
	if (*s == '+' || *s == '-')
		s++;
	n = 0;
	while (*s >= '0' && *s <= '9')
		n = n * 10 + *s++ - '0';
	return (atol_result(neg, n));
}
