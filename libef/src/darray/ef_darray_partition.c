/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_partition.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 22:24:23 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 10:45:26 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

t_darray	*ef_darray_partition(t_darray *array, int start, int end, f_cpy cpy)
{
	t_darray	*new_array;
	size_t		new_size;
	int			i;

	if (!array || start >= end || start < 0 || start >= array->length ||
			end <= 0 || end > array->length)
		return (NULL);
	new_size = array->elem_size * (end - start);
	new_array = ef_darray_create(array->elem_size, new_size * 2);
	if (cpy)
		for (i = start; i < end; i++)
			ef_darray_append(new_array,
								(t_value)cpy((void *)ef_darray_get(array, i)));
	else
		ft_memcpy(new_array->data, array->data + array->elem_size * start,
					new_size);
	new_array->length += end - start;
	return (new_array);
}
