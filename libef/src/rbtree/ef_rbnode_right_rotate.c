/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbnode_right_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 10:42:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 15:56:06 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_rbtree.h"

/*
** x: the node getting rotated down
** y: x's left child which is going to be rotated up
*/

void	ef_rbnode_right_rotate(t_rbtree *tree, t_rbnode *x)
{
	t_rbnode	*y;

	if (tree && x && x != tree->nil && (y = x->left) != tree->nil)
	{
		x->left = y->right;
		if (y->right != tree->nil)
			y->right->parent = x;
		y->parent = x->parent;
		if (x->parent == tree->nil)
			tree->root = y;
		else if (x == x->parent->left)
			x->parent->left = y;
		else
			x->parent->right = y;
		y->right = x;
		x->parent = y;
	}
}
