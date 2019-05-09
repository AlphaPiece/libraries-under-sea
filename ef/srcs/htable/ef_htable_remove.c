/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_remove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 10:03:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 15:56:00 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_htable_remove(t_htable *table, void *key)
{
	t_dlist	*node;
	void	*value;

	node = ef_htable_find(table, key);
	value = NULL;
	if (node)
	{
		value = HT_PAIR(node)->value;
		ef_htable_delete(table, node);
	}
	return (value);
}
