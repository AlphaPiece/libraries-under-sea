/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_heapify_up.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:44:42 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 20:25:06 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_heapify_up(t_bheap *heap, int index)
{
	int	parent;

	if (heap && index >= 1 && index <= ef_bheap_size(heap))
	{
		if (heap->heap_type == MIN_HEAP)
		{
			parent = PARENT(index);
			while (parent >= 1 && ef_bheap_compare(heap, index, parent) < 0)
			{
				ef_darray_swap(heap->array, index, parent);
				index = parent;
				parent = PARENT(index);
			}
		}
		else
		{
			parent = PARENT(index);
			while (parent >= 1 && ef_bheap_compare(heap, index, parent) > 0)
			{
				ef_darray_swap(heap->array, index, parent);
				index = parent;
				parent = PARENT(index);
			}
		}
	}
}
