/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:44:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/07 22:39:00 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_htable	*ef_htable_alloc(void)
{
	t_htable	*table;
	size_t		array_size;

	array_size = sizeof(t_dlist *) * HTABLE_SIZE;
	if (!(table = (t_htable *)malloc(sizeof(t_htable))) ||
			!(table->array = (t_dlist **)malloc(array_size)))
		exit(MALLOC_ERROR);
	ft_bzero(table->array, array_size);
	return (table);
}
