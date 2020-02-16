/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 17:47:26 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/24 09:41:13 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_rbtree.h"

void	ef_rbtree_clear(t_rbtree *tree)
{
	t_deque		*stack;
	t_rbnode	*node;

	if (tree)
	{
		stack = ef_deque_create(ef_dlist_create(tree->root));
		while (!ef_deque_is_empty(stack))
		{
			node = ef_deque_pop_head(stack);
			if (node->right != tree->nil)
				ef_deque_push_head(stack, node->right);
			if (node->left != tree->nil)
				ef_deque_push_head(stack, node->left);
			ef_rbnode_free(node, tree->del_key, tree->del_value);
		}
		ef_deque_free(stack, NULL);
		tree->root = tree->nil;
		tree->size = 0;
	}
}
