/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_insert_list.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 09:41:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 10:43:32 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_slist.h"

t_slist	*ef_slist_insert_list(t_slist *list1, t_slist *list2, int index)
{
	t_slist	*last;
	t_slist	*node;

	if (!list1)
		return (list2);
	if (!list2)
		return (list1);
	if (index <= 0)
		return (ef_slist_prepend_list(list1, list2));
	last = ef_slist_last_node(list2);
	for (node = list1; node->next && index > 1; node = node->next, index--)
		;
	last->next = node->next;
	node->next = list2;
	return (list1);
}
