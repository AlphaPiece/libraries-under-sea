/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sklist_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 12:17:03 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/24 21:35:04 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_sklist_insert(t_sklist *list, t_sknode *z)
{
	int			level;
	int			i;
	t_sknode	*x, *y;

	level = 1;
	while (ft_rand() < PROBABILITY && level < MAX_LEVEL)
		level++;
	while (level > ef_darray_length(list->head->forward))
		ef_darray_append(list->head->forward, (t_value)z);
	x = (t_sknode *)ef_darray_get(list->head->forward, level);
	while (level > 0)
	{
		y = (t_sknode *)ef_darray_peek(x->forward);
		while (y && list->cmp_key(z->key, y->key) > 0)
		{
			x = y;
			y = (t_sknode *)ef_darray_peek(y->forward);
		}
		ef_darray_append(x->forward, (t_value)z);

		level--;
			
}
