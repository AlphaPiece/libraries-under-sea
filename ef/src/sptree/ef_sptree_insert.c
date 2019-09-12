/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 19:07:43 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 19:19:08 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

/*
** z: the node to be inserted
** y: the node which is going to be z's parent;
** x: the node used to travel down
*/

void	ef_sptree_insert(t_sptree *tree, t_spnode *z)
{
	t_spnode	*x, *y;

	if (tree && z)
	{
		y = NULL;
		x = tree->root;
		while (x)
		{
			y = x;
			if (tree->cmp_key(z->key, x->key) < 0)
				x = x->left;
			else
				x = x->right;
		}
		z->parent = y;
		if (!y)
			tree->root = z;
		else if (tree->cmp_key(z->key, y->key) < 0)
			y->left = z;
		else
			y->right = z;
		ef_sptree_splay(tree, z);
	}
}
