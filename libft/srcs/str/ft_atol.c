/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 19:38:07 by zwang             #+#    #+#             */
/*   Updated: 2019/02/17 11:33:03 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	atol_result(int neg, unsigned long num)
{
	long	long_lim;

	long_lim = 9223372036854775807;
	if (!neg && num >= (unsigned long)long_lim)
		return (long_lim);
	if (neg && num - 1 >= (unsigned long)long_lim)
		return (-long_lim - 1);
	return ((neg) ? (long)(~num + 1) : (long)num);
}

long		ft_atol(const char *str)
{
	unsigned long	num;
	t_bool			neg;

	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	neg = (*str == '-') ? true : false;
	if (*str == '+' || *str == '-')
		str++;
	num = 0;
	while (*str >= '0' && *str <= '9')
		num = num * 10 + *str++ - '0';
	return (atol_result(neg, num));
}
