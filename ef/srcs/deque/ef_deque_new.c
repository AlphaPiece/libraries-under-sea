/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 15:50:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 16:00:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_deque	*ef_deque_new(t_dlist *list)
{
	t_deque	*queue;

	queue = ef_deque_alloc();
	queue->head = list;
	queue->tail = ef_dlist_last_node(list);
	queue->length = ef_dlist_length(list);
	return (queue);
}
