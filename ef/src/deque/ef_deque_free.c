/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 21:38:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 12:37:53 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_deque_free(t_deque *queue, f_del del)
{
	if (queue)
	{
		if (queue->head)
			ef_dlist_free(queue->head, del, ALL);
		free(queue);
	}
}
