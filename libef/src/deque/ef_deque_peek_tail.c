/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_peek_tail.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 21:27:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 21:30:19 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_deque.h"

void	*ef_deque_peek_tail(t_deque *queue)
{
	if (!queue || queue->length == 0)
		return (NULL);
	return (queue->tail->data);
}
