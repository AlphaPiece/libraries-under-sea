/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_insert_before.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 11:15:56 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 15:42:55 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_insert_before(t_dlist *list, t_dlist *node_link, void *data)
{
	t_dlist	*new_node;
	t_dlist	*node;

	if (!list || list == node_link)
		return (ef_dlist_prepend(list, data));
	new_node = ef_dlist_alloc();
	new_node->data = data;
	for (node = list; node->next && node->next != node_link; node = node->next)
		;
	new_node->prev = node;
	new_node->next = node->next;
	node->next = new_node;
	if (new_node->next)
		new_node->next->prev = new_node;
	return (list);
}
