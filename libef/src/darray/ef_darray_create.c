/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 10:09:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 10:46:27 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

t_darray	*ef_darray_create(size_t elem_size, int length)
{
	t_darray	*array;

	array = (t_darray *)ef_darray_alloc(elem_size, length);
	array->capacity = MAX(length, DARRAY_LEN);
	array->length = 0;
	array->elem_size = elem_size;
	return (array);
}
