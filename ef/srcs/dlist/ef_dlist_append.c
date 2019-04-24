/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_append.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 09:31:39 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 14:36:47 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_append(t_dlist *list, void *data)
{
	t_dlist	*new_node;
	t_dlist	*node;

	new_node = ef_dlist_alloc();
	new_node->data = data;
	new_node->next = NULL;
	if (!list)
	{
		new_node->prev = NULL;
		return (new_node);
	}
	for (node = list; node->next; node = node->next)
		;
	node->next = new_node;
	new_node->prev = node;
	return (list);
}
