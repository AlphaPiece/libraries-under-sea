/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slist_insert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:26:08 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/15 17:36:32 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

t_slist	*slist_insert(t_slist *list, void *data, int position)
{
	t_slist	*new_node;
	t_slist	*node;
	int		i;

	if (position < 0)
		return (slist_append(list, data));
	else if (position == 0)
		return (slist_prepend(list, data));
	else
	{
		new_node = slist_alloc();
		new_node->data = data;
		node = list;
		for (i = 0; i < position && node->next; i++)
			node = node->next;
		new_node->next = node->next;
		node->next = new_node;
		return (list);
	}
}
