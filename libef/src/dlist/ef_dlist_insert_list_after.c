/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_insert_list_after.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 12:06:27 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 12:18:04 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_dlist.h"

t_dlist	*ef_dlist_insert_list_after(t_dlist *list1, t_dlist *list2,
									t_dlist *node)
{
	t_dlist	*last;

	if (!list2)
		return (list1);
	if (!list1 || !node)
		return (ef_dlist_prepend_list(list1, list2));
	last = ef_dlist_last_node(list2);
	last->next = node->next;
	if (node->next)
		node->next->prev = last;
	node->next = list2;
	list2->prev = node;
	return (list1);
}
