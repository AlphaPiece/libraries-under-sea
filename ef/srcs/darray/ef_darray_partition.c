/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_partition.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:27:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/25 21:18:18 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_darray	*ef_darray_partition(t_darray *darr, int start, int end)
{
	int			arr_len;
	size_t		elem_size;
	t_darray	*new_darr;
	size_t		new_size;

	if (!darr)
		return (NULL);
	arr_len = ef_darray_length(darr);
	if (start < 0 || start >= arr_len || end <= 0 || end > arr_len ||
			start >= end)
		return (NULL);
	elem_size = ef_darray_elem_size(darr);
	new_size = elem_size * (end - start);
	new_darr = ef_darray_sized_new(elem_size, new_size * 2);
	ft_memcpy(new_darr->data, darr->data + elem_size * start, new_size);
	new_darr->elem_no += end - start;
	return (new_darr);
}
