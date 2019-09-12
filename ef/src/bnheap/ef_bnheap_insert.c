/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 20:10:07 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 22:38:13 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bnheap_insert(t_bnheap *heap, t_bnnode *node)
{
	if (heap)
	{
		heap->head = ef_bnnode_merge(heap->head, node, heap->cmp_key);
		if (!heap->top || heap->cmp_key(node->key, heap->top->key) < 0)
			heap->top = node;
	}
}
