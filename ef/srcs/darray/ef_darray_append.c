/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_append.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 19:50:47 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 16:02:15 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_append(t_darray *array, t_value value)
{
	if (array)
	{
		if (array->length + 1 > array->capacity)
			ef_darray_resize(array);
		ft_memcpy(array->data + array->elem_size * array->length, &value,
					array->elem_size);
		array->length++;
	}
}
