/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_heapify_up.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:44:42 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 11:37:13 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_heapify_up(t_bheap *heap, int index)
{
	int	parent;

	if (heap && 0 <= index && index < ef_bheap_size(heap))
	{
		parent = PARENT(index);
		while (parent >= 0 && ef_bheap_compare(heap, index, parent) < 0)
		{
			ef_darray_swap(heap->array, index + 1, parent + 1);
			index = parent;
			parent = PARENT(index);
		}
	}
}
