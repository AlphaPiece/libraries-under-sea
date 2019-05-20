/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_anode_right_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 20:36:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 15:39:18 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

/*
** x: the node getting rotated down
** y: x's left child which is going to be rotated up to replace x
*/

void	ef_anode_right_rotate(t_atree *tree, t_anode *x)
{
	t_anode	*y;

	if (tree && x && (y = x->left))
	{
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
		x->height = 1 + MAX(ef_anode_height(x->left),
							ef_anode_height(x->right));
		y->height = 1 + MAX(ef_anode_height(y->left),
							ef_anode_height(y->right));
	}
}
