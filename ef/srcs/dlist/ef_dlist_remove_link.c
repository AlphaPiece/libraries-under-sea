/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_remove_link.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:55:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 17:20:43 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_remove_link(t_dlist *list, t_dlist *node_link)
{
	t_dlist	*origin;
	t_dlist	*node;

	node = origin = ef_dlist_alloc();
	origin->next = list;
	while (node->next && node->next != node_link)
		node = node->next;
	if (node->next)
	{
		node->next = node->next->next;
		if (node->next->next)
			node->next->next->prev = node;
		node_link->prev = NULL;
		node_link->next = NULL;
	}
	node = origin->next;
	if (node)
		node->prev = NULL;
	ef_dlist_free_node(origin);
	return (node);
}
