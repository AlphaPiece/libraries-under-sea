/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 22:41:52 by zwang             #+#    #+#             */
/*   Updated: 2019/04/07 17:53:21 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num.h"

int	ft_max(int total_no, ...)
{
	va_list	num_list;
	int		max;
	int		num;
	int		i;

	va_start(num_list, total_no);
	i = 0;
	max = va_arg(num_list, int);
	while (++i < total_no)
	{
		num = va_arg(num_list, int);
		if (num > max)
			max = num;
	}
	va_end(num_list);
	return (max);
}
