/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 23:23:27 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/06 20:26:01 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

void	ef_darray_set(t_darray *array, t_value value, int index)
{
	if (index >= 0 && index < array->length)
		ft_memcpy(array->data + array->elem_size * index, &value,
					array->elem_size);
}
