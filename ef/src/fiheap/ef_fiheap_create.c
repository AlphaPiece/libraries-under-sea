/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_fiheap_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:42:49 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/06/05 09:44:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_fiheap	*ef_fiheap_create(f_cmp cmp_key, f_del del_key, f_del del_value)
{
	t_fiheap	*heap;

	if (!cmp_key)
		return (NULL);
	heap = ef_fiheap_alloc();
	heap->top = NULL;
	heap->cmp_key = cmp_key;
	heap->del_key = del_key;
	heap->del_value = del_value;
	return (heap);
}
