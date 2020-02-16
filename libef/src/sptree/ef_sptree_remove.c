/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_remove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:52:08 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/21 11:07:52 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_sptree.h"

/*
** z: the node getting deleted
** y: z's right child after splay
** x: z's left child after splay
*/

void	ef_sptree_remove(t_sptree *tree, void *key)
{
	t_spnode	*x, *y, *z;

	if ((z = ef_sptree_find(tree, key)))
	{
		x = tree->root->left;
		y = tree->root->right;
		if (!x)
		{
			tree->root = y;
			if (y)
				y->parent = NULL;
		}
		else
		{
			x->parent = NULL;
			tree->root = x;
			ef_sptree_splay(tree, ef_spnode_maximum(x));
			tree->root->right = y;
			if (y)
				y->parent = tree->root;
		}
		ef_spnode_free(z, tree->del_key, tree->del_value);
	}
}
