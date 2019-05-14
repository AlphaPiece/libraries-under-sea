/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_anode_left_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 20:30:09 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/13 22:53:36 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_anode_left_rotate(t_atree *tree, t_anode *node)
{
	t_anode	*right;

	if (tree && node && node->right)
	{
		right = node->right;
		node->right = right->left;
		if (right->left)
			right->left->parent = node;
		right->parent = node->parent;
		if (!node->parent)
			tree->root = right;
		else if (node == node->parent->left)
			node->parent->left = right;
		else
			node->parent->right = right;
		right->left = node;
		node->parent = right;
		node->height = 1 + MAX(ef_anode_height(node->left),
								ef_anode_height(node->right));
		right->height = 1 + MAX(ef_anode_height(right->left),
								ef_anode_height(right->right));
	}
}
