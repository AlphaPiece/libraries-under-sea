/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_pop_top.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 18:30:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 20:20:31 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_kvpair	*ef_bheap_pop_top(t_bheap *heap)
{
	t_kvpair	*pair;

	if (heap && ef_bheap_size(heap) > 0)
	{
		pair = (t_kvpair *)ef_darray_get(heap->array, 1);
		ef_darray_set(heap->array, ef_darray_pop(heap->array), 1);
		ef_bheap_heapify_down(heap, 1);
		return (pair);
	}
	return (NULL);
}
