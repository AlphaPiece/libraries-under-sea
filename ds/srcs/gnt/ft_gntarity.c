/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gntarity.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 15:15:35 by zwang             #+#    #+#             */
/*   Updated: 2019/04/12 11:17:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

int		ft_gntarity(t_tree *gnt)
{
	int		*arity_arr;
	int		i;
	int		max;

	if (gnt->child_nbr == 0)
		return (0);
	arity_arr = (int *)malloc(sizeof(int) * gnt->child_nbr);
	i = -1;
	while (++i < gnt->child_nbr)
		arity_arr[i] = ft_gntarity(gnt->children[i]);
	max = ft_intarrmax(arity_arr, gnt->child_nbr);
	free(arity_arr);
	return (ft_max(max, gnt->child_nbr));
}
