/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_traverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:34:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/21 12:37:11 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_sptree.h"

void	ef_sptree_traverse(t_sptree *tree, f_trw trw)
{
	t_deque		*stack;
	t_spnode	*node;

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
