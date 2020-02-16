/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_insert_list_before.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 11:55:05 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 12:04:54 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_dlist.h"

t_dlist	*ef_dlist_insert_list_before(t_dlist *list1, t_dlist *list2,
										t_dlist *node)
{
	t_dlist	*last;

	if (!list2)
		return (list1);
	if (!list1 || !node)
		return (ef_dlist_append_list(list1, list2));
	if (node == list1)
		return (ef_dlist_prepend_list(list1, list2));
	last = ef_dlist_last_node(list2);
	node->prev->next = list2;
	list2->prev = node->prev;
	last->next = node;
	node->prev = last;
	return (list1);
}
