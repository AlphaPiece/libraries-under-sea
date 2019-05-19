/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap_find.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 13:45:09 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 13:54:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_bnnode	*ef_bnheap_find(t_bnheap *heap, void *key)
{
	t_deque		*queue;
	t_bnnode	*node;

	if (heap && heap->head)
	{
		queue = ef_deque_create(ef_dlist_create(heap->head));
		while (!ef_deque_is_empty(queue))
			for (node = ef_deque_pop_head(queue); node; node = node->sibling)
			{
				if (key == node->key || heap->cmp_key(key, node->key) == 0)
				{
					ef_deque_free(queue, NULL);
					return (node);
				}
				if (node->child)
					ef_deque_push_tail(queue, node->child);
			}
		ef_deque_free(queue, NULL);
	}
	return (NULL);
}
