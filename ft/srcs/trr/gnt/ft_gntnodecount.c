/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gntnodecount.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 15:31:56 by zwang             #+#    #+#             */
/*   Updated: 2019/04/11 18:01:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_gntnodecount(t_tree *gnt)
{
	int		*node_arr;
	int		i;
	int		sum;

	if (!gnt->children)
		return (1);
	node_arr = (int *)malloc(sizeof(int) * gnt->child_nbr);
	i = -1;
	while (++i < gnt->child_nbr)
		node_arr[i] = ft_gntnodecount(gnt->children[i]);
	sum = ft_intarrsum(node_arr, gnt->child_nbr);
	free(node_arr);
	return (1 + sum);
}
