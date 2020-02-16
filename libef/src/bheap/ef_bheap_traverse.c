/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_traverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 18:07:07 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 18:16:57 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_bheap.h"

void	ef_bheap_traverse(t_bheap *heap, f_trw trw)
{
	int			i;
	t_kvpair	*pair;

	for (i = 1; i <= ef_bheap_size(heap); i++)
	{
		pair = (t_kvpair *)ef_darray_get(heap->array, i);
		pair->value = trw(pair->key, pair->value);
	}
}
