/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 21:43:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 12:38:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_deque.h"

void	ef_deque_clear(t_deque *queue, f_del del)
{
	if (queue && queue->head)
		ef_dlist_free(queue->head, del, ALL);
	queue->head = NULL;
	queue->tail = NULL;
	queue->length = 0;
}
