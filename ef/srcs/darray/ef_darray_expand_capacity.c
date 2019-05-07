/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_expand_capacity.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 11:28:27 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/06 20:31:21 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_expand_capacity(t_darray *array)
{
	array->capacity *= 2;
	array->data = realloc(array->data, array->capacity * array->elem_size);
	if (!array->data)
		exit(MALLOC_ERROR);
}
