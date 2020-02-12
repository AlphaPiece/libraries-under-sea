/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 10:53:13 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 15:22:08 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_delete(t_bheap *heap, int index)
{
	int			parent;
	t_kvpair	*pair;

	if (heap && 0 <= index && index < ef_bheap_size(heap))
	{
		parent = PARENT(index);
		while (parent >= 0)
		{
			ef_darray_swap(heap->array, index + 1, parent + 1);
			index = parent;
			parent = PARENT(index);
		}
		pair = ef_bheap_pop_top(heap);
		ef_kvpair_free(pair, heap->del_key, heap->del_value);
	}
}
