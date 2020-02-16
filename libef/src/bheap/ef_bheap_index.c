/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 15:09:02 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 15:53:40 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_bheap.h"

int	ef_bheap_index(t_bheap *heap, void *key)
{
	int			i;
	t_kvpair	*pair;

	if (heap && heap->array)
		for (i = 1; i < ef_darray_length(heap->array); i++)
		{
			pair = (t_kvpair *)ef_darray_get(heap->array, i);
			if (key == pair->key || heap->cmp_key(key, pair->key) == 0)
				return (i - 1);
		}
	return (-1);
}
