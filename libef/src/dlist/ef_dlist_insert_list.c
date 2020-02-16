/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_insert_list.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 10:34:07 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 12:18:28 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_dlist.h"

t_dlist	*ef_dlist_insert_list(t_dlist *list1, t_dlist *list2, int index)
{
	t_dlist	*last;
	t_dlist	*node;

	if (!list1)
		return (list2);
	if (!list2)
		return (list1);
	if (index <= 0)
		return (ef_dlist_prepend_list(list1, list2));
	last = ef_dlist_last_node(list2);
	for (node = list1; node->next && index > 1; node = node->next, index--)
		;
	last->next = node->next;
	if (node->next)
		node->next->prev = last;
	node->next = list2;
	list2->prev = node;
	return (list1);
}
