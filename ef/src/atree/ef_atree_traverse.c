/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_atree_traverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 23:30:59 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 21:38:04 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_atree_traverse(t_atree *tree, f_trw trw)
{
	t_deque	*stack;
	t_anode	*node;

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
