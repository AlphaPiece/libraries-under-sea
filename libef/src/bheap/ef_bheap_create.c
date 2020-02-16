/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 13:00:46 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 11:20:25 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_bheap.h"

t_bheap	*ef_bheap_create(f_cmp cmp_key, f_del del_key, f_del del_value)
{
	t_bheap	*heap;

	if (!cmp_key)
		return (NULL);
	heap = ef_bheap_alloc();
	heap->array = ef_darray_create(sizeof(t_kvpair *), 0);
	ef_darray_append(heap->array, 0);
	heap->cmp_key = cmp_key;
	heap->del_key = del_key;
	heap->del_value = del_value;
	return (heap);
}
