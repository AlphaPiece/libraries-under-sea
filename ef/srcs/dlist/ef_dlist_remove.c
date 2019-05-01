/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 16:58:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 12:36:05 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_remove(t_dlist *list, void *data, f_cmp cmp,
							t_flag one_or_all)
{
	t_dlist *origin;
	t_dlist	*node;
	t_dlist	*tmp;

	node = origin = ef_dlist_alloc();
	origin->next = list;
	while (node->next)
		if (node->next->data == data ||
				(cmp && cmp(node->next->data, data) == 0))
		{
			tmp = node->next;
			node->next = tmp->next;
			if (node->next)
				node->next->prev = node;
			ef_dlist_free(tmp, NULL, ONE);
			if (one_or_all == ONE)
				break ;
		}
		else
			node = node->next;
	node = origin->next;
	if (node)
		node->prev = NULL;
	ef_dlist_free(origin, NULL, ONE);
	return (node);
}
