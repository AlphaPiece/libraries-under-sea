/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_prepend.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 10:37:20 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 14:52:27 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_prepend(t_dlist *list, void *data)
{
	t_dlist	*new_node;

	new_node = ef_dlist_alloc();
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = list;
	list->prev = new_node;
	return (new_node);
}
