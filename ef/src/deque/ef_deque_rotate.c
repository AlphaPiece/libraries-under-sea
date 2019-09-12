/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 23:47:36 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 13:10:05 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_deque_rotate(t_deque *queue, int n)
{
	if (!queue || ef_deque_is_empty(queue) ||  n == 0)
		return ;
	queue->head = ef_dlist_rotate(queue->head, n);
	queue->tail = ef_dlist_last_node(queue->head);
}
