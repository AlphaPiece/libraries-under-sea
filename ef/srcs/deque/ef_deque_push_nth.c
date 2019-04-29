/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_push_nth.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 20:23:09 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 12:38:57 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_deque_push_nth(t_deque *queue, void *data, int n)
{
	if (!queue)
		return ;
	else if (n <= 0)
		ef_deque_push_head(queue, data);
	else if (n >= queue->length)
		ef_deque_push_tail(queue, data);
	else
	{
		ef_dlist_insert(queue->head, data, n);
		queue->length++;
	}
}
