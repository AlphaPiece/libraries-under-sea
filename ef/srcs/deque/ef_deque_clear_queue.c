/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_clear_queue.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 21:40:52 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 13:14:27 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_deque_clear_queue(t_deque *queue)
{
	if (queue && queue->head)
		ef_dlist_free_list(queue->head);
	queue->head = NULL;
	queue->tail = NULL;
	queue->length = 0;
}
