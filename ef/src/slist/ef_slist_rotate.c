/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 09:02:40 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/28 09:43:53 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_rotate(t_slist *list, int n)
{
	int		length;
	t_slist	*bound;
	t_slist	*first;
	t_slist	*last;

	if (!list || n == 0)
		return (list);
	length = ef_slist_length(list);
	n %= length;
	if (n > 0)
		n -= length;
	for (bound = list; ++n != 0; bound = bound->next)
		;
	first = bound->next;
	bound->next = NULL;
	last = ef_slist_last_node(first);
	last->next = list;
	return (first);
}

