/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_free_queue.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 16:01:08 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 16:05:08 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_deque_free_queue(t_deque *queue)
{
	if (queue)
	{
		if (queue->head)
			ef_dlist_free_list(queue->head);
		free(queue);
	}
}	
