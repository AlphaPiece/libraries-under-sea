/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 23:44:57 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/14 22:38:51 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_htable.h"

void	*ef_htable_get(t_htable *table, void *key)
{
	t_dlist	*node;

	if (table && (node = ef_htable_find(table, key)))
		return (HT_PAIR(node)->value);
	return (NULL);
}
