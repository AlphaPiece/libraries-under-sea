/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 13:00:46 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/15 10:00:02 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_bheap	*ef_bheap_create(f_cmp cmp_key, t_flag heap_type)
{
	t_bheap	*heap;

	if (!cmp_key || (heap_type != MIN_HEAP && heap_type != MAX_HEAP))
		return (NULL);
	heap = ef_bheap_alloc();
	heap->array = ef_darray_create(sizeof(t_kvpair *), 0);
	ef_darray_append(heap->array, 0);
	heap->cmp_key = cmp_key;
	heap->heap_type = heap_type;
	return (heap);
}
