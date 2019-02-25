/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:35:06 by zwang             #+#    #+#             */
/*   Updated: 2019/02/24 21:09:52 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_min(int total_num, ...)
{
	va_list	num_list;
	long	min;
	long	num;
	int		i;

	va_start(num_list, total_num);
	min = va_arg(num_list, long);
	i = 0;
	while (++i < total_num)
	{
		num = va_arg(num_list, long);
		if (num < min)
			min = num;
	}
	va_end(num_list);
	return (min);
}
