/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_insert_list_before.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 13:06:49 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 20:15:55 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_insert_list_before(t_slist *list1, t_slist *list2,
										t_slist *node)
{
	t_slist	*prev;
	
	if (!list2)
		return (list1);
	if (!list1 || !node)
		return (ef_slist_append_list(list1, list2));
	if (node == list1)
		return (ef_slist_prepend_list(list1, list2));
	for (prev = list1; prev->next != node; prev = prev->next)
		;
	prev->next = list2;
	ef_slist_last_node(list2)->next = node;
	return (list1);
}
