/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_push_tail.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 19:56:03 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 20:37:20 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_deque_push_tail(t_deque *queue, void *data)
{
	if (!queue)
		return ;
	queue->head = ef_dlist_insert_after(queue->head, data, queue->tail);
	if (queue->length++ == 0)
		queue->tail = queue->head;
	else
		queue->tail = queue->tail->next;
}
