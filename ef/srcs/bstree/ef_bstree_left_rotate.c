/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_left_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 10:41:37 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 23:18:55 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bstree_left_rotate(t_bstree *tree, t_rbtree *x)
{
	t_rbtree	*y;

	if (!tree || !x || x == tree->nil)
		return ;
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
