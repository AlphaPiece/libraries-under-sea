/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_traverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 21:58:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/07 23:44:05 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_htable_traverse(t_htable *table, f_trw trw)
{
	int		i;
	t_dlist	*list;

	if (table && trw)
		for (i = 0; i < table->capacity; i++)
			for (list = table->array[i]; list; list = list->next)
				GET_PAIR(list)->value = trw(GET_PAIR(list)->key,
											GET_PAIR(list)->value);
}
			
