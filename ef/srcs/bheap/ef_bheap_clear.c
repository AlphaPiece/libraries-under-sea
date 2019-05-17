/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 16:03:38 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 16:12:46 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_clear(t_bheap *heap)
{
	int	i;

	if (heap && heap->array)
	{
		for (i = 1; i < ef_darray_length(heap->array); i++)
			ef_kvpair_free((t_kvpair *)ef_darray_get(heap->array, i),
							heap->del_key, heap->del_value);
		ef_darray_free(heap->array, NULL);
	}
}
