/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_decrease_key.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 09:53:19 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 10:06:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_decrease_key(t_bheap *heap, int index, f_trv dec_key)
{
	if (heap && dec_key && heap->heap_type == MIN_HEAP)
	{
		
