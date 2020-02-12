/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_pop.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 20:39:53 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/06 21:00:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

t_value	ef_darray_pop(t_darray *array)
{
	t_value	value;

	if (array)
	{
		value = ef_darray_get(array, array->length - 1);
		array->length--;
		return (value);
	}
	return (0);
}
