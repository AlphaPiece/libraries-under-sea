/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_peek_top.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 17:39:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 20:21:56 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_kvpair	*ef_bheap_peek_top(t_bheap *heap)
{
	if (heap && ef_bheap_size(heap) > 0)
		return ((t_kvpair *)ef_darray_get(heap->array, 1));
	return (NULL);
}
