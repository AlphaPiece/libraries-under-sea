/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_anode_left_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 20:30:09 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 15:56:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

/*
** x: the node getting rotated down
** y: x's right child which is going to rotated up
*/

void	ef_anode_left_rotate(t_atree *tree, t_anode *x)
{
	t_anode	*y;

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
		x->height = 1 + MAX(ef_anode_height(x->left),
							ef_anode_height(x->right));
		y->height = 1 + MAX(ef_anode_height(y->left),
							ef_anode_height(y->right));
	}
}
