/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gtnodeno.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 15:31:56 by zwang             #+#    #+#             */
/*   Updated: 2019/04/13 21:18:36 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

int		ft_gtnodeno(t_tree *gt)
{
	int		*node_arr;
	int		i;
	int		sum;

	if (!gt->children)
		return (1);
	node_arr = (int *)malloc(sizeof(int) * gt->child_nbr);
	i = -1;
	while (++i < gt->child_nbr)
		node_arr[i] = ft_gtnodeno(gt->children[i]);
	sum = ft_intarrsum(node_arr, gt->child_nbr);
	free(node_arr);
	return (1 + sum);
}
