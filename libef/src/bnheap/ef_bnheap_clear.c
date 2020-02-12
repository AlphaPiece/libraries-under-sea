/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 08:51:56 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 20:55:17 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bnheap_clear(t_bnheap *heap)
{
	t_deque		*stack;
	t_bnnode	*node;

	if (heap)
	{
		stack = ef_deque_create(ef_dlist_create(heap->head));
		while (!ef_deque_is_empty(stack))
		{
			node = ef_deque_pop_head(stack);
			if (node->children)
				ef_deque_push_head(stack, node->children);
			if (node->sibling)
				ef_deque_push_head(stack, node->sibling);
			ef_bnnode_free(node, heap->del_key, heap->del_value);
		}
		ef_deque_free(stack, NULL);
		heap->head = NULL;
		heap->top = NULL;
	}
}
