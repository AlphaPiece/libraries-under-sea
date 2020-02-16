/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_insert_sorted.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:23:24 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 07:14:45 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_dlist.h"

t_dlist	*ef_dlist_insert_sorted(t_dlist *list, void *data, f_cmp cmp)
{
	t_dlist	*new_node;
	t_dlist	*node;

	if (!list || !cmp || cmp(data, list->data) <= 0)
		return (ef_dlist_prepend(list, data));
	new_node = ef_dlist_alloc();
	new_node->data = data;
	for (node = list; node->next && cmp(node->next->data, data) < 0; )
		node = node->next;
	new_node->prev = node;
	new_node->next = node->next;
	node->next = new_node;
	if (new_node->next)
		new_node->next->prev = new_node;
	return (list);
}
