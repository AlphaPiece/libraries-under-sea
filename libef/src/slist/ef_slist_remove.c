/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 22:18:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 11:18:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_slist.h"

t_slist	*ef_slist_remove(t_slist *list, void *data, f_cmp cmp, f_del del,
							t_flag one_or_all)
{
	t_slist	*origin;
	t_slist	*node;
	t_slist	*tmp;

	node = origin = ef_slist_alloc();
	origin->next = list;
	while (node->next)
		if (node->next->data == data ||
				(cmp && cmp(node->next->data, data) == 0))
		{
			tmp = node->next;
			node->next = tmp->next;
			if (del)
				del(tmp->data);
			ef_slist_free(tmp, NULL, ONE);
			if (one_or_all == ONE)
				break ;
		}
		else
			node = node->next;
	node = origin->next;
	ef_slist_free(origin, NULL, ONE);
	return (node);
}
