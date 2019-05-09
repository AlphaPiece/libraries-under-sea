/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_max_heapify.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 14:44:42 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 15:02:46 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_max_heapify(t_bheap *heap, int index)
{
	int	l, r;

	l = LEFT_CHILD(i);
	r = RIGHT_CHILD(i);
	if (l < ef_bheap_size(heap) && 
