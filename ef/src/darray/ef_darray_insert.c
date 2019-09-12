/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 20:12:27 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 16:01:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_insert(t_darray *array, t_value value, int index)
{
	void	*ptr;

	if (array)
	{
		if (index >= array->length)
			ef_darray_append(array, value);
		else
		{
			if (index < 0)
				index = 0;
			if (array->length + 1 > array->capacity)
				ef_darray_resize(array);
			ptr = array->data + array->elem_size * index;
			ft_memmove(ptr + array->elem_size, ptr,
						array->elem_size * (array->length - index));
			ft_memcpy(ptr, &value, array->elem_size);
			array->length++;
		}
	}
}

