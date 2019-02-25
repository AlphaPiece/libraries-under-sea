/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sum.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 15:09:30 by zwang             #+#    #+#             */
/*   Updated: 2019/02/24 21:11:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long	ft_sum(int total_num, ...)
{
	va_list	num_list;
	int		i;
	long	sum;

	va_start(num_list, total_num);
	sum = 0;
	i = 0;
	while (i++ < total_num)
		sum += va_arg(num_list, long);
	va_end(num_list);
	return (sum);
}
