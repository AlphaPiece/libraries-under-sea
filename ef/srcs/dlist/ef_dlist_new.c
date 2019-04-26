/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 10:24:32 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 10:25:49 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_new(void *data)
{
	t_dlist	*node;

	node = ef_dlist_alloc();
	node->data = data;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
