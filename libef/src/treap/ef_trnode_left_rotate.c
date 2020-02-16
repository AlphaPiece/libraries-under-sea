/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_trnode_left_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 19:05:04 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/23 19:10:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_treap.h"

/*
** x: the node getting rotated down
** y: x's right child which is going to be rotated up
*/

void	ef_trnode_left_rotate(t_treap *tree, t_trnode *x)
{
	t_trnode	*y;

	if (tree && x && (y = x->right))
	{
		x->right = y->left;
		if (y->left)
			y->left->parent = x;
		y->parent = x->parent;
		if (!x->parent)
			tree->root = y;
		else if (x == x->parent->left)
			x->parent->left = y;
		else
			x->parent->right = y;
		y->left = x;
		x->parent = y;
	}
}
