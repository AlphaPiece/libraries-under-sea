/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 23:38:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 23:41:13 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_deque	*ef_deque_copy(t_deque *queue)
{
	t_deque	*new_queue;

	if (!queue)
		return (NULL);
	new_queue = ef_deque_alloc();
	new_queue->head = ef_dlist_copy(queue->head);
	new_queue->tail = ef_dlist_last_node(new_queue->head);
	new_queue->length = queue->length;
	return (new_queue);
}
