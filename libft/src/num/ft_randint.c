/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 11:09:50 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/05 08:28:38 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num.h"

int	ft_randint(int lower, int upper)
{
	static t_bool	seed_set = false;
	static long		n;
	long			l;
	long			u;

	if (!seed_set)
	{
		n = (int)time(0);
		seed_set = true;
	}
	n = ft_inthash(n);
	if (lower > upper)
		ft_swap(&lower, &upper);
	l = lower;
	u = upper;
	return (n % (u - l) + l);
}
