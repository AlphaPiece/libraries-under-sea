/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sklist_find.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 16:47:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/12 17:27:38 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_sknode	*ef_sklist_find(t_sklist *list, void *key)
{
	t_sknode	*curr;
	t_sknode	*next;
	int			i;

	curr = list->head;
	while (curr)
	{
		i = ef_darray_length(curr->forward) - 1;
		do
			next = ef_darray_get(curr->forward, i--);
		while (i >= 0 && list->cmp_key(next->key, key) > 0);
		
