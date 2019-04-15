/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gtheight.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:26:48 by zwang             #+#    #+#             */
/*   Updated: 2019/04/13 21:19:06 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

int		ft_gtheight(t_tree *gt)
{
	int		*path_arr;
	int		i;
	int		max;

	if (!gt->children)
		return (1);
	path_arr = (int *)malloc(sizeof(int) * gt->child_nbr);
	i = -1;
	while (++i < gt->child_nbr)
		path_arr[i] = ft_gtheight(gt->children[i]);
	max = ft_intarrmax(path_arr, (size_t)gt->child_nbr);
	free(path_arr);
	return (1 + max);
}
