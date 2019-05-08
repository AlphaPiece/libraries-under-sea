/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:44:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 12:55:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_htable	*ef_htable_alloc(int size)
{
	t_htable	*table;
	size_t		array_size;

	array_size = sizeof(t_dlist *) * MAX(size, HTABLE_SIZE);
	if (!(table = (t_htable *)malloc(sizeof(t_htable))) ||
			!(table->array = (t_dlist **)malloc(array_size)))
		exit(MALLOC_ERROR);
	ft_bzero(table->array, array_size);
	table->capacity = MAX(size, HTABLE_SIZE);
	return (table);
}
