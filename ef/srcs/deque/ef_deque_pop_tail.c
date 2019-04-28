/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_pop_tail.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 20:38:15 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 20:43:15 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_deque_pop_tail(t_deque *queue)
{
	t_dlist	*tail
	void	*data;

	if (!queue || queue->length == 0)
		return (NULL);
	tail = queue->tail;
	queue->tail = queue->tail->prev;
	queue->head = ef_dlist_remove_node(queue->head, tail);
	queue->length--;
	data = tail->data;
	ef_dlist_free_node(tail);
	return (data);
}
