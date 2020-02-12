/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_heapify_down.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 19:46:07 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 11:38:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_heapify_down(t_bheap *heap, int index)
{
	int	left, right;
	int	heap_size;
	int	largest;

	if (heap && 0 <= index && index < (heap_size = ef_bheap_size(heap)))
		while (true)
		{
			left = LEFT_CHILD(index);
			right = RIGHT_CHILD(index);
			largest = (left < heap_size &&
						ef_bheap_compare(heap, left, index) < 0) ? left : index;
			if (right < heap_size && ef_bheap_compare(heap, right, largest) < 0)
				largest = right;
			if (largest != index)
			{
				ef_darray_swap(heap->array, index + 1, largest + 1);
				index = largest;
			}
			else
				break ;
		}
}
