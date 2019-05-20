/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap_traverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 20:14:52 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 20:58:16 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bnheap_traverse(t_bnheap *heap, f_trw trw)
{
	t_deque		*queue;
	t_bnnode	*node;

	if (!heap || !heap->head || !trw)
		return ;
	queue = ef_deque_create(ef_dlist_create(heap->head));
	while (!ef_deque_is_empty(queue))
		for (node = ef_deque_pop_head(queue); node; node = node->sibling)
		{
			node->value = trw(node->key, node->value);
			if (node->children)
				ef_deque_push_tail(queue, node->children);
		}
}
