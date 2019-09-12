/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 09:28:15 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/28 09:41:11 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_rotate(t_dlist *list, int n)
{
	int		length;
	t_dlist	*bound;
	t_dlist	*first;
	t_dlist	*last;

	if (!list || n == 0)
		return (list);
	length = ef_dlist_length(list);
	n %= length;
	if (n > 0)
		n -= length;
	for (bound = list; ++n != 0; bound = bound->next)
		;
	first = bound->next;
	first->prev = NULL;
	bound->next = NULL;
	last = ef_dlist_last_node(first);
	last->next = list;
	list->prev = last;
	return (first);
}
