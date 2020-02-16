/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:18:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/21 12:37:27 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_sptree.h"

int	ef_sptree_size(t_sptree *tree)
{
	t_deque		*stack;
	t_spnode	*node;
	int			size;

	if (!tree)
		return (0);
	stack = ef_deque_create(NULL);
	node = tree->root;
	size = 0;
	while (!ef_deque_is_empty(stack) || node)
		if (node)
		{
			size++;
			ef_deque_push_head(stack, node);
			node = node->left;
		}
		else
		{
			node = ef_deque_pop_head(stack);
			node = node->right;
		}
	ef_deque_free(stack, NULL);
	return (size);
}
