/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_deque_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 15:53:31 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 15:57:41 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_deque	*ef_deque_alloc(void)
{
	t_deque	*queue;

	if (!(queue = (t_deque *)malloc(sizeof(t_deque))))
		exit(MALLOC_ERROR);
	return (queue);
}
