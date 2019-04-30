/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_in_order_traverse.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 13:51:23 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 21:18:59 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_ntree_in_order_traverse(t_ntree *tree, int depth, f_trv trv,
									t_traverse_flag part)
{
	t_ntree	*subtree;

	if (!tree || depth == 0)
		return ;
	--depth;
	if (tree->children)
		ef_ntree_in_order_traverse(tree->children, depth, trv, part);
	switch (part)
	{
		case LEAF:
			if (!tree->children)
				tree->data = trv(tree->data);
			break ;
		case NON_LEAF:
			if (tree->children)
				tree->data = trv(tree->data);
			break ;
		case ALL:
			tree->data = trv(tree->data);
			break ;
	}
	if (tree->children)
		for (subtree = tree->children->next; subtree; subtree = subtree->next)
			ef_ntree_in_order_traverse(subtree, depth, trv, part);
}
