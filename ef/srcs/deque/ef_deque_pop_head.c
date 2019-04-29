/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_pop_head.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 20:32:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 19:50:49 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_deque_pop_head(t_deque *queue)
{
	t_dlist	*head;
	void	*data;

	if (!queue || queue->length == 0)
		return (NULL);
	head = queue->head;
	queue->head = ef_dlist_remove_node(queue->head, head);
	queue->length--;
	data = head->data;
	ef_dlist_free_one(head);
	return (data);
}
