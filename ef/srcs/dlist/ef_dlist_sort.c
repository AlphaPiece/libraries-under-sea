/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 11:25:10 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 19:49:39 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

static t_dlist	*merge_dlist(t_dlist *list1, t_dlist *list2, f_cmp cmp)
{
	t_dlist	*origin;
	t_dlist	*node;

	origin = node = ef_dlist_alloc();
	while (list1 && list2)
		if (cmp(list1->data, list2->data) < 0)
		{
			node->next = list1;
			list1->prev = node;
			list1 = list1->next;
			node = node->next;
		}
		else
		{
			node->next = list2;
			list2->prev = node;
			list2 = list2->next;
			node = node->next;
		}
	if (list1)
	{
		node->next = list1;
		list1->prev = node;
	}
	else
	{
		node->next = list2;
		list2->prev = node;
	}
	node = origin->next;
	node->prev = NULL;
	ef_dlist_free_one(origin);
	return (node);
}

t_dlist			*ef_dlist_sort(t_dlist *list, int (*cmp)(void *, void *))
{
	t_dlist	*fast;
	t_dlist	*slow;
	t_dlist	*bound;

	if (!list || !list->next)
		return (list);
	bound = fast = slow = list;
	while (fast && fast->next)
	{
		bound = slow;
		slow = slow->next;
		fast = fast->next->next;
	}
	bound->next = slow->prev = NULL;
	list = ef_dlist_sort(list, cmp);
	slow = ef_dlist_sort(slow, cmp);
	return (merge_dlist(list, slow, cmp));
}
