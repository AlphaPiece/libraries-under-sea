/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gtarity.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 15:15:35 by zwang             #+#    #+#             */
/*   Updated: 2019/04/13 21:17:30 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

int		ft_gtarity(t_tree *gt)
{
	int		*arity_arr;
	int		i;
	int		max;

	if (gt->child_nbr == 0)
		return (0);
	arity_arr = (int *)malloc(sizeof(int) * gt->child_nbr);
	i = -1;
	while (++i < gt->child_nbr)
		arity_arr[i] = ft_gtarity(gt->children[i]);
	max = ft_intarrmax(arity_arr, gt->child_nbr);
	free(arity_arr);
	return (ft_max(max, gt->child_nbr));
}
