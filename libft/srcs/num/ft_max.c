/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 22:41:52 by zwang             #+#    #+#             */
/*   Updated: 2019/02/24 21:10:38 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_max(int total_num, ...)
{
	va_list	num_list;
	long	max;
	long	num;
	int		i;

	va_start(num_list, total_num);
	i = 0;
	max = va_arg(num_list, long);
	while (++i < total_num)
	{
		num = va_arg(num_list, long);
		if (num > max)
			max = num;
	}
	va_end(num_list);
	return (max);
}
