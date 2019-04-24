/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_insert_before.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 17:04:49 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 15:42:53 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_insert_before(t_slist *list, t_slist *node_link, void *data)
{
	t_slist	*new_node;
	t_slist	*node;

	if (!list || list == node_link)
		return (ef_slist_prepend(list, data));
	new_node = ef_slist_alloc();
	new_node->data = data;
	for (node = list; node->next && node->next != node_link; node = node->next)
		;
	new_node->next = node->next;
	node->next = new_node;
	return (list);
}
