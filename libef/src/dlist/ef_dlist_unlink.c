/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_unlink.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:55:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 23:41:57 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_dlist.h"

t_dlist	*ef_dlist_unlink(t_dlist *list, t_dlist *node)
{
	if (!node)
		return (list);
	if (node->prev)
	{
		if (node->prev->next == node)
			node->prev->next = node->next;
		else
			ft_dprintf(2, "Warning: corrupted doubly-nodeed list detected\n");
	}
	if (node->next)
	{
		if (node->next->prev == node)
			node->next->prev = node->prev;
		else
			ft_dprintf(2, "Warning: corrupted doubly-nodeed list detected\n");
	}
	if (node == list)
		list = list->next;
	node->prev = node->next = NULL;
	return (list);
}
