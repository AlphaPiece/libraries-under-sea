/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 06:11:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/06 20:33:16 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_darray	*ef_darray_new(size_t elem_size)
{
	t_darray	*array;

	array = (t_darray *)ef_darray_alloc(elem_size, DARRAY_LEN);
	array->capacity = DARRAY_LEN;
	array->length = 0;
	array->elem_size = elem_size;
	return (array);
}
