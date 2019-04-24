/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_remove_link.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 22:02:09 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/23 22:11:59 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_remove_link(t_slist *list, t_slist *node_link)
{
	t_slist	*origin;
	t_slist	*node;

	node = origin = ef_slist_alloc();
	origin->next = list;
	while (node->next && node->next != node_link)
		node = node->next;
	if (node->next)
	{
		node->next = node->next->next;
		node_link->next = NULL;
	}
	node = origin->next;
	ef_slist_free_node(origin);
	return (node);
}
