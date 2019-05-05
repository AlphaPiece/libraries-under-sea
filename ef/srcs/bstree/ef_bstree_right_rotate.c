/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_right_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 10:42:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 10:42:53 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bstree_right_rotate(t_bstree *tree, t_rbtree *x)
{
	t_rbtree	*y;

	if (x && x->left)
	{
		y = x->left;
		x->left = y->right;
		if (y->right)
			y->right->parent = x;
		y->parent = x->parent;
		if (!x->parent)
			tree->root = y;
		else if (x == x->parent->left)
			x->parent->left = y;
		else
			x->parent->right = y;
		y->right = x;
		x->parent = y;
	}
}
