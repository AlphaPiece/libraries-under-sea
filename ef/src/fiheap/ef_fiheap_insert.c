/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_fiheap_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:45:39 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/06/05 09:52:46 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_fiheap_insert(t_fiheap *heap, t_finode *node)
{
	if (heap && node)
	{
		if (!heap->top)
			heap->top = node;
		else
		{
			heap->top->left->right = node;
			node->left = heap->top->left;
			node->right = heap->top;
			heap->top->left = node;
			if (heap->cmp_key(node->key, heap->top->key) < 0)
				heap->top = node;
		}
	}
}
