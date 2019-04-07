/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randintarr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 20:55:31 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/07 12:27:12 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Note: lower, upper are inclusive
*/

int *ft_randintarr(int lower, int upper, int len)
{
    int     range;
    time_t  t;
	int		i;
	int		*arr;

	if (!(arr = (int *)malloc(sizeof(int) * len)))
		return (NULL);
	if (lower > upper)
	{
		i = lower;
		lower = upper;
		upper = i;
	}	
	range = upper - lower + 1;
    srand((unsigned int)time(&t));
	i = 0;
	while (i < len)
		arr[i++] = rand() % range + lower;
    return (arr);
}
