/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:21:41 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/07 23:26:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_htable_insert(t_htable *table, void *key, void *value)
{
	int			hashkey;
	t_dlist		*new_node;
	t_dlist		*list;

	if (table && table->array)
	{
		new_node = ef_dlist_new(ef_kvpair_new(key, value));
		hashkey = ef_htable_hash(table, key);
		if ((list = table->array[hashkey]))
			new_node = ef_dlist_prepend_list(list, new_node);
		table->array[hashkey] = new_node;
		table->size++;
	}
}
