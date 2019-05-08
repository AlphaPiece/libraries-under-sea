/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_resize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:13:25 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 13:35:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_htable_resize(t_htable *table)
{
	double		factor;
	t_darray	*pairs;
	t_htable	*tmp;
	int			i;
	t_dlist		*list;

	factor = (double)table->size / table->capacity;
	if (factor < LOAD_FACTOR)
		return ;
	tmp = ef_htable_alloc(table->capacity * 2);
	pairs = ef_htable_pairs(table);
	tmp->hsh_key = table->hsh_key;
	for (i = 0; i < ef_darray_length(pairs); i++)
		ef_htable_insert(tmp, (t_kvpair *)ef_darray_get(pairs, i));
	ef_darray_free(pairs, NULL);
	for (i = 0; i < table->capacity; i++)
		if ((list = table->array[i]))
			ef_dlist_free(list, NULL, ALL);
	free(table->array);
	table->array = tmp->array;
	table->capacity = tmp->capacity;
	free(tmp);
}
