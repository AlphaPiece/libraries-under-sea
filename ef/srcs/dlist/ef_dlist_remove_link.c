/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_remove_link.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:55:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 21:34:12 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_remove_link(t_dlist *list, t_dlist *node_link)
{
	if (!node_link)
		return (list);
	if (node_link->prev)
	{
		if (node_link->prev->next == node_link)
			node_link->prev->next = node_link->next;
		else
			ft_dprintf(2, "Warning: corrupted doubly-linked list detected\n");
	}
	if (node_link->next)
	{
		if (node_link->next->prev == node_link)
			node_link->next->prev = node_link->prev;
		else
			ft_dprintf(2, "Warning: corrupted doubly-linked list detected\n");
	}
	if (node_link == list)
		list = list->next;
	node_link->prev = node_link->next = NULL;
	return (list);
}
