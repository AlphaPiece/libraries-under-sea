/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numarrmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:42:59 by zwang             #+#    #+#             */
/*   Updated: 2019/04/11 17:57:26 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num.h"

int		ft_numarrmax(int arr[], int len)
{
	int	max;
	int	i;

	if (len == 0 || !arr)
		return (0);
	max = arr[0];
	i = 0;
	while (++i < len)
		if (max < arr[i])
			max = arr[i];
	return (max);
}
