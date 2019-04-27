/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_pre_order_traverse.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 13:51:23 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 14:20:04 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_ntree_pre_order_traverse(t_ntree *tree, f_mfy mfy,
									t_traverse_flag part)
{
	t_ntree	*subtree;

	if (!tree)
		return ;
	switch (part)
	{
		case LEAF:
			if (!tree->children)
				tree->data = mfy(tree->data);
			break ;
		case NON_LEAF:
			if (tree->children)
				tree->data = mfy(tree->data);
			break ;
		case ALL:
			tree->data = mfy(tree->data);
			break ;
	}
	for (subtree = tree->children; subtree; subtree = subtree->next)
		ef_ntree_pre_order_traverse(subtree, mfy, part);
}
