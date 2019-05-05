/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:21:41 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 22:47:40 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_htable_insert(t_htable *table, void *key, void *value)
{
	int			hashkey;
	t_kvpair	*pair;
	t_slist		*list;

	if (table && table->array)
	{
		pair = ef_kvpair_new(key, value);
		hashkey = ef_htable_hash(table, key);
		if (!(list = ef_darray_nth(table->array, hashkey)))
			ef_darray_prepend(table->array, ef_slist_new(pair));
		else
			
}
