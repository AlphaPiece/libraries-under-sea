/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_spnode_left_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:54:04 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 15:55:06 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_sptree.h"

/*
** x: the node getting rotated down
** y: x's right child which is going to be rotated up
*/

void	ef_spnode_left_rotate(t_sptree *tree, t_spnode *x)
{
	t_spnode	*y;

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
