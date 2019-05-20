/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbnode_left_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 10:41:37 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 15:30:25 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

/*
** x: the node getting rotated down
** y: x's right child which is going to rotate up to replace x
*/

void	ef_rbnode_left_rotate(t_rbtree *tree, t_rbnode *x)
{
	t_rbnode	*y;

	if (tree && x && x != tree->nil && (y = x->right) != tree->nil)
	{
		x->right = y->left;
		if (y->left != tree->nil)
			y->left->parent = x;
		y->parent = x->parent;
		if (x->parent == tree->nil)
			tree->root = y;
		else if (x == x->parent->left)
			x->parent->left = y;
		else
			x->parent->right = y;
		y->left = x;
		x->parent = y;
	}
}
