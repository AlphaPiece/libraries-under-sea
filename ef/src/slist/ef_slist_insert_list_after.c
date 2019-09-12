/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_insert_list_after.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 20:05:42 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 20:16:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_insert_list_after(t_slist *list1, t_slist *list2,
									t_slist *node)
{
	if (!list2)
		return (list1);
	if (!list1 || !node)
		return (ef_slist_prepend_list(list1, list2));
	ef_slist_last_node(list2)->next = node->next;
	node->next = list2;
	return (list1);
}
