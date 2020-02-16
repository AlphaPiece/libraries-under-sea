/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:18:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 13:20:09 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_dlist.h"

t_dlist	*ef_dlist_find(t_dlist *list, void *data, f_cmp cmp, t_flag order)
{
	if (order == FORWARD)
	{
		for ( ; list; list = list->next)
			if (list->data == data || (cmp && cmp(list->data, data) == 0))
				return (list);
	}
	else
	{
		for (list = ef_dlist_last_node(list); list; list = list->prev)
			if (list->data == data || (cmp && cmp(list->data, data) == 0))
				return (list);
	}
	return (NULL);
}
