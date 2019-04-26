/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_append_list.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 10:26:46 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 12:25:39 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_append_list(t_dlist *list1, t_dlist *list2)
{
	t_dlist	*last;

	if (!list1)
		return (list2);
	last = ef_dlist_last_node(list1);
	last->next = list2;
	list2->prev = last;
	return (list1);
}
