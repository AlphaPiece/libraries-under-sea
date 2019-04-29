/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_remove_all.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 16:58:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 19:49:21 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_remove_all(t_dlist *list, void *data, f_cmp cmp)
{
	t_dlist *origin;
	t_dlist	*node;
	t_dlist	*tmp;

	node = origin = ef_dlist_alloc();
	origin->next = list;
	if (cmp)
		while (node->next)
			if (cmp(node->next->data, data) == 0)
			{
				tmp = node->next;
				node->next = tmp->next;
				if (node->next)
					node->next->prev = node;
				ef_dlist_free_one(tmp);
			}
			else
				node = node->next;
	else
		while (node->next)
			if (node->next->data == data)
			{
				tmp = node->next;
				node->next = tmp->next;
				if (node->next)
					node->next->prev = node;
				ef_dlist_free_one(tmp);
			}
			else
				node = node->next;
	node = origin->next;
	if (node)
		node->prev = NULL;
	ef_dlist_free_one(origin);
	return (node);
}
