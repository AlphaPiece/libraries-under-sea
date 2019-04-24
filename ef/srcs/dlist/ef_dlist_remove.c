/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:47:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 17:19:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_remove(t_dlist *list, void *data)
{
	t_dlist	*origin;
	t_dlist	*node;
	t_dlist	*tmp;

	node = origin = ef_dlist_alloc();
	origin->next = list;
	while (node->next && node->next->data != data)
		node = node->next;
	if (node->next)
	{
		tmp = node->next;
		node->next = tmp->next;
		if (node->next)
			node->next->prev = node;
		ef_dlist_free_node(tmp);
	}
	node = origin->next;
	if (node)
		node->prev = NULL;
	ef_dlist_free_node(origin);
	return (node);
}
