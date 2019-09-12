/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_peek_head.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 21:26:51 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 21:30:40 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_deque_peek_head(t_deque *queue)
{
	if (!queue || queue->length == 0)
		return (NULL);
	return (queue->head->data);
}
