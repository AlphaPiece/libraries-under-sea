/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:26:08 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 15:43:34 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_insert(t_slist *list, void *data, int position)
{
	t_slist	*new_node;
	t_slist	*node;
	int		i;

	if (position <= 0 || !list)
		return (ef_slist_prepend(list, data));
	new_node = ef_slist_alloc();
	new_node->data = data;
	for (node = list, i = 1; i < position && node->next; i++, node = node->next)
		;
	new_node->next = node->next;
	node->next = new_node;
	return (list);
}
