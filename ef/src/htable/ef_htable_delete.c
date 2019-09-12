/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 11:20:21 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 15:54:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_htable_delete(t_htable *table, t_dlist *node)
{
	int		hashkey;
	
	if (table && node)
	{
		hashkey = ef_htable_hash(table, HT_PAIR(node)->key);
		table->array[hashkey] = ef_dlist_unlink(table->array[hashkey], node);
		ef_kvpair_free(node->data, table->del_key, table->del_value);
		free(node);
		table->size--;
	}
}

