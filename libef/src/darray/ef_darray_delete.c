/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 20:48:42 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/06 21:00:08 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

t_value	ef_darray_delete(t_darray *array, int index)
{
	t_value	value;
	void	*ptr;

	if (array && 0 <= index && index < array->length)
	{
		value = ef_darray_get(array, index);
		if (index != array->length - 1)
		{
			ptr = array->data + array->elem_size * index;
			ft_memmove(ptr, ptr + array->elem_size,
						array->elem_size * (array->length - 1 - index));
		}
		array->length--;
		return (value);
	}
	return (0);
}
