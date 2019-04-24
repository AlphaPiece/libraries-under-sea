/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_remove_custom.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 22:45:41 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 08:33:56 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_remove_custom(t_slist *list, void *data,
								int (*cmp)(void *, void *))
{
	t_slist	*origin;
	t_slist	*node;
	t_slist	*tmp;

	node = origin = ef_slist_alloc();
	origin->next = list;
	while (node->next && cmp(node->next->data, data) != 0)
		node = node->next;
	if (node->next)
	{
		tmp = node->next;
		node->next = tmp->next;
		ef_slist_free_node(tmp);
	}
	node = origin->next;
	ef_slist_free_node(origin);
	return (node);
}
