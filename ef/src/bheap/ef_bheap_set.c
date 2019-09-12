/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 15:31:17 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 15:34:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_set(t_bheap *heap, void *key, void *value)
{
	if (heap)
		ef_bheap_insert(heap, ef_kvpair_create(key, value));
}
