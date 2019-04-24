/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 10:39:07 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 15:43:12 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_insert(t_dlist *list, void *data, int position)
{
	t_dlist	*new_node;
	t_dlist	*node;
	int		i;

	if (position <= 0 || !list)
		return (ef_dlist_prepend(list, data));
	new_node = ef_dlist_alloc();
	new_node->data = data;
	for (node = list, i = 1; node->next && i < position; i++, node = node->next)
		;
	new_node->prev = node;
	new_node->next = node->next;
	node->next = new_node;
	if (new_node->next)
		new_node->next->prev = new_node;
	return (list);
}
