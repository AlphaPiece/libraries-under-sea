/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 21:51:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/01/08 23:09:16 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_deque.h"

void	ef_deque_reverse(t_deque *queue)
{
	t_dlist	*list;

	if (queue && queue->length > 1)
	{
		list = ef_dlist_reverse(queue->head);
		queue->tail = queue->head;
		queue->head = list;
	}
}
