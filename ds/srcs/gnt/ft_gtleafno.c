/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gtleafno.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:52:14 by zwang             #+#    #+#             */
/*   Updated: 2019/04/13 21:18:15 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

int		ft_gtleafno(t_tree *gt)
{
	int		*leaf_arr;
	int		i;
	int		sum;

	if (!gt->children)
		return (1);
	leaf_arr = (int *)malloc(sizeof(int) * gt->child_nbr);
	i = -1;
	while (++i < gt->child_nbr)
		leaf_arr[i] = ft_gtleafno(gt->children[i]);
	sum = ft_intarrsum(leaf_arr, gt->child_nbr);
	free(leaf_arr);
	return (sum);
}
