/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap_change_key.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 10:34:32 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 14:04:29 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bnheap_change_key(t_bnheap *heap, t_bnnode *node, void *new_key)
{
	if (heap && node && heap->cmp_key(new_key, node->key) < 0)
	{
		if (heap->del_key)
			heap->del_key(node->key);
		node->key = new_key;
		while (node->parent && heap->cmp_key(node->key, node->parent->key) < 0)
		{
			ft_memswap(&node->key, &node->parent->key, sizeof(void *));
			ft_memswap(&node->value, &node->parent->value, sizeof(void *));
			node = node->parent;
		}
	}
}
