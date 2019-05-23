/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uglyn.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 20:58:28 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/23 18:21:02 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_uglyn(int n)
{
	long long	uglyns[10000];
	int			i, i2, i3, i5;
	long long	next2, next3, next5;
	long long	uglyn;

	i2 = i3 = i5 = 0;
	uglyns[0] = 1;
	next2 = 2;
	next3 = 3;
	next5 = 5;
	i = 0;
	while (++i < n)
	{
		uglyn = ft_min(3, next2, next3, next5);
		uglyns[i] = uglyn;
		if (uglyn == next2)
		{
			i2++;
			next2 = uglyns[i2] * 2;
		}
		if (uglyn == next3)
		{
			i3++;
			next3 = uglyns[i3] * 3;
		}
		if (uglyn == next5)
		{
			i5++;
			next5 = uglyns[i5] * 5;
		}
	}
	return (uglyns[n - 1]);
}
