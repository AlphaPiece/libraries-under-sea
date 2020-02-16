/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_traverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 10:10:17 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/07 10:23:43 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_deque.h"

void	ef_deque_traverse(t_deque *queue, f_trv trv, int length, t_flag order)
{
	t_dlist	*node;

	if (queue && queue->length > 0 && trv)
	{
		if (order == FORWARD)
			ef_dlist_traverse(queue->head, trv, length, FORWARD);
		else if (order == BACKWARD)
			for (node = queue->tail; node && length-- != 0; node = node->prev)
				node->data = trv(node->data);
	}
}
