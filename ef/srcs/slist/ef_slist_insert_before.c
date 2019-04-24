/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_insert_before.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 17:04:49 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/16 17:59:52 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_insert_before(t_slist *list, t_slist *sibling, void *data)
{
	t_slist	*node;
	t_slist	*new_node;

	if (!list || !sibling)
		return (ef_slist_append(list, data));
	if (list == sibling)
		return (ef_slist_prepend(list, data));
	for (node = list; node->next && node->next != sibling; node = node->next)
		;
	new_node = ef_slist_alloc();
	new_node->data = data;
	new_node->next = node->next;
	node->next = new_node;
	return (list);
}
