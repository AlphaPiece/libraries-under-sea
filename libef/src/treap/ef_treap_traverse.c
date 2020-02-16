/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_treap_traverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:29:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/24 09:32:57 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_treap.h"

void	ef_treap_traverse(t_treap *tree, f_trw trw)
{
	t_deque		*stack;
	t_trnode	*node;

	if (tree && trw)
	{
		stack = ef_deque_create(NULL);
		node = tree->root;
		while (!ef_deque_is_empty(stack) || node)
			if (node)
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
