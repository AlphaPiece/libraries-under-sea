/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_change_key.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 20:32:00 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 13:58:54 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_change_key(t_bheap *heap, int index, void *new_key)
{
	t_kvpair	*pair;

	if (heap && 0 <= index && index < ef_bheap_size(heap))
	{
		pair = (t_kvpair *)ef_darray_get(heap->array, index + 1);
		if (heap->cmp_key(new_key, pair->key) < 0)
		{
			if (heap->del_key)
				heap->del_key(pair->key);
			pair->key = new_key;
			ef_bheap_heapify_up(heap, index);
		}
	}
}

