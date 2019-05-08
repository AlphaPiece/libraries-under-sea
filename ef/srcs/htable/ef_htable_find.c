/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_find.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 23:51:23 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 13:31:52 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_htable_find(t_htable *table, void *key)
{
	int		hashkey;
	t_dlist	*list;

	if (table)
	{
		hashkey = ef_htable_hash(table, key);
		for (list = table->array[hashkey]; list; list = list->next)
			if (list->data && table->cmp_key(GET_PAIR(list)->key, key) == 0)
				return (list);
	}
	return (NULL);
}
