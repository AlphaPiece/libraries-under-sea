/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_traverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:16:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 21:35:28 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_rbtree.h"

void	ef_rbtree_traverse(t_rbtree *tree, f_trw trw)
{
	t_deque		*stack;
	t_rbnode	*node;

	if (tree && trw)
	{
		stack = ef_deque_create(NULL);
		node = tree->root;
		while (!ef_deque_is_empty(stack) || node)
			if (node != tree->nil)
			{
				ef_deque_push_head(stack, node);
				node = node->left;
			}
			else
			{
				node = ef_deque_pop_head(stack);
				node->value = trw(node->key, node->value);
				node = node->right;
			}
		ef_deque_free(stack, NULL);
	}
}
