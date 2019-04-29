/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 21:38:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 19:53:27 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_deque_free(t_deque *queue, f_del del)
{
	if (queue)
	{
		if (queue->head)
			ef_dlist_free_all(queue->head, del);
		free(queue);
	}
}
