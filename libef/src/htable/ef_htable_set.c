/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 10:31:28 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/24 09:22:59 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_htable.h"

void	ef_htable_set(t_htable *table, void *key, void *value)
{
	t_dlist	*node;

	if (table)
	{
		if ((node = ef_htable_find(table, key)))
		{
			if (table->del_value)
				table->del_value(HT_PAIR(node)->value);
			HT_PAIR(node)->value = value;
		}
		else
			ef_htable_insert(table, ef_kvpair_create(key, value));
	}
}
