/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 16:53:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 19:49:08 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_remove(t_dlist *list, void *data, f_cmp cmp)
{
	t_dlist	*origin;
	t_dlist	*node;
	t_dlist	*tmp;

	node = origin = ef_dlist_alloc();
	origin->next = list;
	if (cmp)
		while (node->next && cmp(node->next->data, data) != 0)
			node = node->next;
	else
		while (node->next && node->next->data != data)
			node = node->next;
	if (node->next)
	{
		tmp = node->next;
		node->next = tmp->next;
		if (node->next)
			node->next->prev = node;
		ef_dlist_free_one(tmp);
	}
	node = origin->next;
	if (node)
		node->prev = NULL;
	ef_dlist_free_one(origin);
	return (node);
}
