/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uglynum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 20:58:28 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/24 21:21:03 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_uglynum(int n)
{
	long long	uglynums[10000];
	int			i, i2, i3, i5;
	long long	next2, next3, next5;
	long long	uglynum;

	i2 = i3 = i5 = 0;
	uglynums[0] = 1;
	next2 = 2;
	next3 = 3;
	next5 = 5;
	i = 0;
	while (++i < n)
	{
		uglynum = ft_min(3, next2, next3, next5);
		uglynums[i] = uglynum;
		if (uglynum == next2)
		{
			i2++;
			next2 = uglynums[i2] * 2;
		}
		if (uglynum == next3)
		{
			i3++;
			next3 = uglynums[i3] * 3;
		}
		if (uglynum == next5)
		{
			i5++;
			next5 = uglynums[i5] * 5;
		}
	}
	return (uglynums[n - 1]);
}
