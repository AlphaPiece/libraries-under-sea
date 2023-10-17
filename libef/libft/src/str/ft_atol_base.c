/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 15:48:26 by zwang             #+#    #+#             */
/*   Updated: 2019/06/01 12:10:35 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

static long long	atol_base_result(int sign, unsigned long long n)
{
	long long	long_lim;

	long_lim = 9223372036854775807;
	if (sign > 0 && n >= (unsigned long long)long_lim)
		return (long_lim);
	if (sign < 0 && n - 1 >= (unsigned long long)long_lim)
		return (-long_lim - 1);
	return ((long long)n * sign);
}

long long			ft_atol_base(const char *s, int base)
{
	unsigned long long	n;
	int					sign;

	if (base < 2 || base > 16)
		return (0);
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	sign = (*s == '-') ? -1 : 1;
	if (*s == '+' || *s == '-')
		s++;
	n = 0;
	if (base <= 10)
		while (*s >= '0' && *s <= base - 1 + '0')
			n = n * base + *s++ - '0';
	else
		while ((*s >= '0' && *s <= '9') ||
				(*s >= 'A' && *s <= base - 11 + 'A') ||
				(*s >= 'a' && *s <= base - 11 + 'a'))
			if (*s >= '0' && *s <= '9')
				n = n * base + *s++ - '0';
			else if (*s >= 'A' && *s <= base - 11 + 'A')
				n = n * base + *s++ - 'A' + 10;
			else
				n = n * base + *s++ - 'a' + 10;
	return (atol_base_result(sign, n));
}
