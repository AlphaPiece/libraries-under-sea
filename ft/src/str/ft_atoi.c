/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/09 10:52:55 by zwang             #+#    #+#             */
/*   Updated: 2019/06/01 12:10:02 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	atoi_result(long n)
{
	long	long_lim;

	long_lim = 9223372036854775807;
	if (n == long_lim)
		return (-1);
	if (n == -long_lim - 1)
		return (0);
	return ((int)n);
}

int			ft_atoi(const char *s)
{
	long	n;

	n = ft_atol(s);
	return (atoi_result(n));
}
