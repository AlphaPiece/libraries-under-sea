/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 08:26:03 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 12:14:51 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "ef_bnheap.h"

int	ef_bnheap_size(t_bnheap *heap)
{
	int			size;
	t_bnnode	*node;

	if (heap)
	{
		size = 0;
		for (node = heap->head; node; node = node->sibling)
			size += pow(2, node->degree);
		return (size);
	}
	return (0);
}
