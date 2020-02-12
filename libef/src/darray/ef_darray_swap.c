/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 22:03:37 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/06 22:09:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

void	ef_darray_swap(t_darray *array, int index1, int index2)
{
	if (index1 != index2 && index1 >= 0 && index1 < ef_darray_length(array) &&
			index2 >= 0 && index2 < ef_darray_length(array))
		ft_memswap(array->data + array->elem_size * index1,
					array->data + array->elem_size * index2, array->elem_size);
}
