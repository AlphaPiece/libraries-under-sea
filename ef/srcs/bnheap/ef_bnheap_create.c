/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:32:42 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 22:38:28 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_bnheap	*ef_bnheap_create(f_cmp cmp_key, f_del del_key, f_del del_value)
{
	t_bnheap	*heap;

	if (!cmp_key)
		return (NULL);
	heap = ef_bnheap_alloc();
	heap->head = NULL;
	heap->top = NULL;
	heap->cmp_key = cmp_key;
	heap->del_key = del_key;
	heap->del_value = del_value;
	return (heap);
}
