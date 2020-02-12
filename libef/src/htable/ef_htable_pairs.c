/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_pairs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 12:07:43 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 11:00:29 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_darray	*ef_htable_pairs(t_htable *table)
{
	t_darray	*pairs;
	int			i;
	t_dlist		*list;

	if (table && table->size > 0)
	{
		pairs = ef_darray_create(sizeof(t_kvpair *), table->size);
		for (i = 0; i < table->capacity; i++)
			for (list = table->array[i]; list; list = list->next)
				ef_darray_append(pairs, (t_value)list->data);
		return (pairs);
	}
	return (NULL);
}	
