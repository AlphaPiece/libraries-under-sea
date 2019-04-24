/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_remove_all_custom.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 08:34:10 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 08:36:13 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_remove_all_custom(t_slist *list, void *data,
									int (*cmp)(void *, void *))
{
	t_slist	*origin;
	t_slist	*node;
	t_slist	*tmp;

	node = origin = ef_slist_alloc();
	origin->next = list;
	while (node->next)
		if (cmp(node->next->data, data) == 0)
		{
			tmp = node->next;
			node->next = tmp->next;
			ef_slist_free_node(tmp);
		}
		else
			node = node->next;
	node = origin->next;
	ef_slist_free_node(origin);
	return (node);
}
