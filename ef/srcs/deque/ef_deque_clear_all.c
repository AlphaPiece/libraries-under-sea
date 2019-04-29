/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_clear_all.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 21:43:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 13:15:18 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_deque_chear_all(t_deque *queue, f_del del)
{
	if (queue && queue->head)
		ef_dlist_free_all(queue->head, del);
	queue->head = NULL;
	queue->tail = NULL;
	queue->length = 0;
}
