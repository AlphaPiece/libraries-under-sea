/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slist_append.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:00:13 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/15 17:07:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

t_slist	*slist_append(t_slist *list, void *data)
{
	t_slist	*new_node;
	t_slist	*node;

	new_node = slist_alloc();
	new_node->data = data;
	new_node->next = NULL;
	if (!list)
		return (new_node);
	node = list;
	while (node->next)
		node = node->next;
	node->next = new_node;
	return (list);
}
