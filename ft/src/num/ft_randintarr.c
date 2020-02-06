/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randintarr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 15:41:22 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/22 15:52:34 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num.h"

int	*ft_randintarr(int lower, int upper, int len)
{
	int	*arr;
	int	i;

	if (!(arr = (int *)malloc(sizeof(int) * len)))
		return (NULL);
	i = 0;
	while (i < len)
		arr[i++] = ft_randint(lower, upper);
	return (arr);
}
