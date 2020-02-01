/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dset_union.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 07:48:36 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/01/31 22:03:20 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dset	*ef_dset_link(t_dset *x, t_dset *y)
{
	if (x->rank > y->rank)
	{
		y->parent = x;
		ft_memswap(&x->next, &y->next, sizeof(x->next));
		return (x);
	}
	else
	{
		x->parent = y;
		if (x->rank == y->rank)
			y->rank++;
		ft_memswap(&x->next, &y->next, sizeof(x->next));
		return (y);
	}
}

t_dset	*ef_dset_union(t_dset *set1, t_dset *set2)
{
	return (ef_dset_link(ef_dset_find(set1), ef_dset_find(set2)));
}
