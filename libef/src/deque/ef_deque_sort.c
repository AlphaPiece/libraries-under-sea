/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 23:42:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 23:43:47 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_deque_sort(t_deque *queue, f_cmp cmp)
{
	if (!queue)
		return ;
	queue->head = ef_dlist_sort(queue->head, cmp);
	queue->tail = ef_dlist_last_node(queue->head);
}
