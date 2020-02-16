/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:44:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:20:29 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_htable.h"

t_htable	*ef_htable_alloc(int size)
{
	t_htable	*table;
	size_t		array_size;

	array_size = sizeof(t_dlist *) * MAX(size, HTABLE_SIZE);
	if (!(table = (t_htable *)malloc(sizeof(t_htable))) ||
			!(table->array = (t_dlist **)malloc(array_size)))
	{
		perror("malloc");
		exit(1);
	}
	ft_bzero(table->array, array_size);
	table->capacity = MAX(size, HTABLE_SIZE);
	return (table);
}
