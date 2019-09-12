/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sgtree_traverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 19:57:07 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/29 20:00:00 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_sgtree_traverse(t_sgtree *tree, f_trw trw)
{
	t_deque		*stack;
	t_sgnode	*node;

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
