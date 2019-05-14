/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbnode_left_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 10:41:37 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/13 21:19:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_rbnode_left_rotate(t_rbtree *tree, t_rbnode *node)
{
	t_rbnode	*x, *y;

	if (!tree || !node || node == tree->nil || node->right == tree->nil)
		return ;
	x = node;
	y = x->right;
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
