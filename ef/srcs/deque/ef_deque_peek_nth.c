/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_peek_nth.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 21:31:27 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 21:33:27 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_deque_peek_nth(t_deque *queue, int n)
{
	if (!queue)
		return (NULL);
	return (ef_ef_dlist_nth_data(queue->head, n));
}
