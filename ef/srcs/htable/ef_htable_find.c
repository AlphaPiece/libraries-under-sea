/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_find.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 23:51:23 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/06 23:56:11 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_htable_find(t_htable *table, void *key)
{
	int		hashkey;
	t_dlist	*list;

	hashkey = ef_htable_hash(table, key);
	list = ef_darray_get(table->array, hashkey);
	while (list)
		if (list->data && table->cmp_key(list->data->key, key) == 0)
			return (list);
	return (NULL);
}
