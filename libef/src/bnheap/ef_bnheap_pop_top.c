/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap_pop_top.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 22:41:03 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 20:57:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_bnheap.h"

t_bnnode	*ef_bnheap_pop_top(t_bnheap *heap)
{
	t_bnnode	*node;
	t_bnnode	*new_top;

	if (heap && heap->head)
	{
		if (heap->head == heap->top)
			heap->head = heap->head->sibling;
		else
		{
			node = heap->head;
			while (node->sibling != heap->top)
				node = node->sibling;
			node->sibling = node->sibling->sibling;
		}
		heap->top->children->parent = NULL;
		heap->head = ef_bnnode_merge(heap->head,
										ef_bnnode_reverse(heap->top->children),
										heap->cmp_key);
		for (new_top = node = heap->head; node; node = node->sibling)
			if (heap->cmp_key(node->key, new_top->key) < 0)
				new_top = node;
		node = heap->top;
		heap->top = new_top;
		node->sibling = NULL;
		node->children = NULL;
		node->degree = 0;
		return (node);
	}
	return (NULL);
}
