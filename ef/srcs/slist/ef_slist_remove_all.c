/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_remove_all.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 22:18:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 07:11:30 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_remove_all(t_slist *list, void *data, f_cmp cmp)
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
			ef_slist_free_one(tmp);
		}
		else
			node = node->next;
	node = origin->next;
	ef_slist_free_one(origin);
	return (node);
}
