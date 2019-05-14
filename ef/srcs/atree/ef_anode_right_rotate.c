/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_anode_right_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 20:36:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/13 23:02:14 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_anode_right_rotate(t_atree *tree, t_anode *node)
{
	t_anode	*left;

	if (tree && node && node->left)
	{
		left = node->left;
		node->left = left->right;
		if (left->right)
			left->right->parent = node;
		left->parent = node->parent;
		if (!node->parent)
			tree->root = left;
		else if (node == node->parent->left)
			node->parent->left = left;
		else
			node->parent->right = left;
		left->right = node;
		node->parent = left;
		node->height = 1 + MAX(ef_anode_height(node->left),
								ef_anode_height(node->right));
		left->height = 1 + MAX(ef_anode_height(left->left),
								ef_anode_height(left->right));
	}
}
