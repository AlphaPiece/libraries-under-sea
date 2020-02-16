/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 11:36:28 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 09:01:58 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_htable.h"

void	ef_htable_clear(t_htable *table)
{
	int		i;
	t_dlist	*list;
	t_dlist	*next;

	if (table)
	{
		for (i = 0; i < table->capacity; i++)
			if ((list = table->array[i]))
				while (list)
				{
					next = list->next;
					ef_kvpair_free(list->data, table->del_key,
									table->del_value);
					free(list);
					list = next;
				}
		table->size = 0;
	}
}
