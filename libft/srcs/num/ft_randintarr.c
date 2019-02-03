/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randintarr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 20:55:31 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/02 21:51:45 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int *ft_randintarr(int lower, int upper, int len)
{
    int     range;
    time_t  t;
	int		i;
	int		*arr;

    range = upper - lower + 1;
    srand((unsigned int)time(&t));
	if (!(arr = (int *)malloc(sizeof(int) * len)))
		return (NULL);
	i = 0;
	while (i < len)
		arr[i++] = rand() % range + lower;
    return (arr);
}
