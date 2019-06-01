/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 19:00:41 by zwang             #+#    #+#             */
/*   Updated: 2019/06/01 12:09:47 by Zexi Wang        ###   ########.fr       */
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

int			ft_atoi_base(const char *s, int base)
{
	long	n;

	n = ft_atol_base(s, base);
	return (atoi_result(n));
}
