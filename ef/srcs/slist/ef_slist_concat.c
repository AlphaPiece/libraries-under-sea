/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_concat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 21:28:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/23 21:31:56 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_concat(t_slist *list1, t_slist *list2)
{
	t_slist	*node;

	if (!list1)
		return (list2);
	for (node = list1; node->next; node = node->next)
		;
	node->next = list2;
	return (list1);
}
