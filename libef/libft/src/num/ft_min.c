/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 09:35:06 by zwang             #+#    #+#             */
/*   Updated: 2019/04/07 17:53:31 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num.h"

int	ft_min(int total_no, ...)
{
	va_list	num_list;
	int		min;
	int		num;
	int		i;

	va_start(num_list, total_no);
	min = va_arg(num_list, int);
	i = 0;
	while (++i < total_no)
	{
		num = va_arg(num_list, int);
		if (num < min)
			min = num;
	}
	va_end(num_list);
	return (min);
}
