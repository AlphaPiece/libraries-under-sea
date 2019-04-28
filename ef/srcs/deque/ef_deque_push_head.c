/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_push_head.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 16:09:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 16:17:17 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_deque_push_head(t_deque *queue, void *data)
{
	if (!queue)
		return ;
	queue->head = ef_dlist_prepend(queue->head, data);
	if (queue->length == 0)
		queue->tail = queue->head;
	queue->length++;
}
