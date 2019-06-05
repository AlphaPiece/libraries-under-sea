/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_fiheap_merge.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:05:17 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/06/05 12:25:27 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_fiheap	*ef_fiheap_merge(t_fiheap *heap1, t_fiheap *heap2)
{
	t_finode	*tmp;

	if (!heap1)
		return (heap2);
	if (!heap2)
		return (heap1);
	if (!heap1->top)
		heap1->top = heap2->top;
	else if (heap2->top)
	{
		ft_memswap(&heap1->top->left->right, &heap2->top->left->right,
					sizeof(t_finode *));
		ft_memswap(&heap1->top->left, &heap2->top->left, sizeof(t_finode *));
		if (heap1->cmp_key(heap2->top->key, heap1->top->key) < 0)
			heap1->top = heap2->top;
	}
	free(heap2);
	return (heap1);
}
