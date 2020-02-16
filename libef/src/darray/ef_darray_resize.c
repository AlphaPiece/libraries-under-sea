/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_resize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 11:28:27 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/12 09:32:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

void	ef_darray_resize(t_darray *array)
{
	array->capacity *= 2;
	array->data = realloc(array->data, array->capacity * array->elem_size);
	if (!array->data)
	{
		perror("realloc");
		exit(1);
	}
}
