/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numarrmin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:47:26 by zwang             #+#    #+#             */
/*   Updated: 2019/04/11 17:58:36 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num.h"

int		ft_numarrmin(int arr[], int len)
{
	int	min;
	int	i;

	if (len == 0 || !arr)
		return (0);
	min = arr[0];
	i = 0;
	while (++i < len)
		if (min > arr[i])
			min = arr[i];
	return (min);
}
