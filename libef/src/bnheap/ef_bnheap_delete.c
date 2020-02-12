/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 15:24:03 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 15:34:23 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bnheap_delete(t_bnheap *heap, t_bnnode *node)
{
	if (heap && node)
	{
		while (node->parent)
		{
			ft_memswap(&node->key, &node->parent->key, sizeof(void *));
			ft_memswap(&node->value, &node->parent->value, sizeof(void *));
			node = node->parent;
		}
		heap->top = node;
		node = ef_bnheap_pop_top(heap);
		ef_bnnode_free(node, heap->del_key, heap->del_value);
	}
}
