/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_peek_nth.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 21:31:27 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 12:58:14 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_deque.h"

void	*ef_deque_peek_nth(t_deque *queue, int n)
{
	if (!queue)
		return (NULL);
	if (n <= 0)
		return (ef_deque_peek_head(queue));
	if (n >= queue->length - 1)
		return (ef_deque_peek_tail(queue));
	return (ef_dlist_nth_data(queue->head, n));
}
