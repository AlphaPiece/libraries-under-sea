/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_copy_deep.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:56:32 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 22:42:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_copy_deep(t_dlist *list, f_cpy cpy)
{
	t_dlist	*new_list;
	t_dlist	*node;

	if (!list)
		return (NULL);
	new_list = ef_dlist_alloc();
	new_list->data = (cpy) ? cpy(list->data) : list->data;
	new_list->prev = NULL;
	node = new_list;
	list = list->next;
	while (list)
	{
		node->next = ef_dlist_alloc();
		node->next->data = (cpy) ? cpy(list->data) : list->data;
		node->next->prev = node;
		node = node->next;
		list = list->next;
	}
	node->next = NULL;
	return (new_list);
}
