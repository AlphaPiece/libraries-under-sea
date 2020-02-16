/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 23:38:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 19:17:21 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_deque.h"

t_deque	*ef_deque_copy(t_deque *queue, f_cpy cpy)
{
	t_deque	*new_queue;

	if (!queue)
		return (NULL);
	new_queue = ef_deque_alloc();
	new_queue->head = ef_dlist_copy(queue->head, cpy);
	new_queue->tail = ef_dlist_last_node(new_queue->head);
	new_queue->length = queue->length;
	return (new_queue);
}
