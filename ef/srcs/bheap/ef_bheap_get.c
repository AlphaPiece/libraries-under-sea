/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_get.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 15:34:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 15:55:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_bheap_get(t_bheap *heap, int index)
{
	t_kvpair	*pair;

	if (heap && 0 <= index && index < ef_bheap_size(heap))
	{
		pair = (t_kvpair *)ef_darray_get(heap->array, index + 1);
		if (pair)
			return (pair->value);
	}
	return (NULL);
}
