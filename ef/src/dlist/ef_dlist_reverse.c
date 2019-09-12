/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 19:24:05 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 19:51:28 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_reverse(t_dlist *list)
{
	t_dlist	*prev;

	prev = NULL;
	while (list)
	{
		prev = list;
		list = list->next;
		prev->next = prev->prev;
		prev->prev = list;
	}
	return (prev);
}
