/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_remove_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 22:02:09 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 10:14:17 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_remove_node(t_slist *list, t_slist *node)
{
	t_slist	*origin;

	origin = ef_slist_alloc();
	origin->next = list;
	list = origin;
	while (list->next && list->next != node)
		list = list->next;
	if (list->next)
	{
		list->next = list->next->next;
		node->next = NULL;
	}
	list = origin->next;
	ef_slist_free_node(origin);
	return (list);
}
