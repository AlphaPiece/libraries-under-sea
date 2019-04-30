/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 22:45:41 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 07:10:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_remove(t_slist *list, void *data, f_cmp cmp)
{
	t_slist	*origin;
	t_slist	*node;
	t_slist	*tmp;

	node = origin = ef_slist_alloc();
	origin->next = list;
	while (node->next && (node->next->data == data ||
							(cmp && cmp(node->next->data, data) != 0)))
		node = node->next;
	if (node->next)
	{
		tmp = node->next;
		node->next = tmp->next;
		ef_slist_free_one(tmp);
	}
	node = origin->next;
	ef_slist_free_one(origin);
	return (node);
}
