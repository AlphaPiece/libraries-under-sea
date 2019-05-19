/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap_merge.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 20:10:19 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/18 20:18:59 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_bnheap	*ef_bnheap_merge(t_bnheap *heap1, t_bnheap *heap2)
{
	t_bnnode	*node;

	if (!heap1)
		return (heap2);
	if (!heap2)
		return (heap1);
	heap1->head = ef_bnnode_merge(heap1->head, heap2->head, heap1->cmp_key);
	heap1->top = heap1->head;
	for (node = heap1->head; node; node = node->sibling)
		if (heap1->cmp_key(node->key, heap1->top->key) < 0)
			heap1->top = node;
	free(heap2);
	return (heap1);
}
