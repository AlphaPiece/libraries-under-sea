/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 00:02:38 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 11:26:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_insert(t_bheap *heap, t_kvpair *pair)
{
	if (heap)
	{
		ef_darray_append(heap->array, (t_value)pair);
		ef_bheap_heapify_up(heap, ef_bheap_size(heap) - 1);
	}
}
