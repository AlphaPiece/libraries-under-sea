/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 13:00:46 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 14:41:45 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_bheap	*ef_bheap_new(f_cmp cmp_key, t_flag heap_type)
{
	t_bheap	*heap;

	heap = ef_bheap_alloc();
	heap->array = ef_darray_new(sizeof(t_kvpair *));
	ef_darray_append(heap->array, 0);
	heap->cmp = cmp_key;
	heap->heap_type = heap_type;
	return (heap);
}
