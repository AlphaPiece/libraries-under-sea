/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_pop_nth.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 21:20:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 21:25:42 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_deque_pop_mth(t_deque *queue, int n)
{
	t_dlist	*node;
	void	*data;

	if (!queue || n < 0 || n >= queue->length)
		return (NULL);
	else if (n == 0)
		return (ef_deque_pop_head(queue));
	else if (n == queue->length - 1)
		return (ef_deque_pop_tail(queue));
	else
	{
		node = ef_dlist_nth_node(queue->head);
		queue->head = ef_dlist_remove_node(queue->head, node);
		queue->length--;
		data = node->data;
		ef_dlist_free_node(node);
		return (data);
	}
}
