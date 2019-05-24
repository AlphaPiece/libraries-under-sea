/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_treap_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:50:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/24 10:55:26 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

static void	heapify_down(t_treap *tree, t_trnode *node)
{
	while (node->left || node->right)
		if (!node->left)
			ef_trnode_left_rotate(tree, node);
		else if (!node->right)
			ef_trnode_right_rotate(tree, node);
		else if (node->left->priority > node->right->priority)
			ef_trnode_right_rotate(tree, node);
		else
			ef_trnode_left_rotate(tree, node);
}

void		ef_treap_delete(t_treap *tree, t_trnode *node)
{
	if (tree && node)
	{
		heapify_down(tree, node);
		if (!node->parent)
			tree->root = NULL;
		else if (node == node->parent->left)
			node->parent->left = NULL;
		else
			node->parent->right = NULL;
		ef_trnode_free(node, tree->del_key, tree->del_value);
		tree->size--;
	}
}
