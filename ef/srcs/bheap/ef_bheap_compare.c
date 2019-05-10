/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_compare.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 15:57:23 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 16:05:34 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_bheap_compare(t_bheap *heap, int index1, int index2)
{
	t_kvpair	*pair1;
	t_kvpair	*pair2;

	pair1 = (t_kvpair *)ef_darray_get(heap->array, index1);
	pair2 = (t_kvpair *)ef_darray_get(heap->array, index2);
	return (heap->cmp_key(pair1->key, pair2->key));
}
