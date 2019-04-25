/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 18:04:24 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 19:57:56 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

static t_slist	*merge_slist(t_slist *list1, t_slist *list2,
								int (*cmp)(void *, void *))
{
	t_slist	*origin;
	t_slist	*node;

	origin = node = ef_slist_alloc();
	while (list1 && list2)
		if (cmp(list1->data, list2->data) < 0)
		{
			node->next = list1;
			list1 = list1->next;
			node = node->next;
		}
		else
		{
			node->next = list2;
			list2 = list2->next;
			node = node->next;
		}
	node->next = (list1) ? list1 : list2;
	node = origin->next;
	ef_slist_free_node(origin);
	return (node);
}		

t_slist			*ef_slist_sort(t_slist *list, int (*cmp)(void *, void *))
{
	t_slist	*fast;
	t_slist	*slow;
	t_slist	*bound;

	if (!list || !list->next)
		return (list);
	bound = fast = slow = list;
	while (fast && fast->next)
	{
		bound = slow;
		slow = slow->next;
		fast = fast->next->next;
	}
	bound->next = NULL;
	list = ef_slist_sort(list, cmp);
	slow = ef_slist_sort(slow, cmp);
	return (merge_slist(list, slow, cmp));
}	
