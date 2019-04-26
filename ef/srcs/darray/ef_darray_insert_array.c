/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_insert_array.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 11:12:47 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/25 21:00:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_insert_array(t_darray *darr, int index, void *arr,
								int arr_len)
{
	t_rdarray	*rdarr;
	void		*ptr;
	size_t		arr_size;
	size_t		move_size;

	if (!darr || !arr || !arr_len)
		return ;
	rdarr = (t_rdarray *)darr;
	if (index >= rdarr->elem_no)
	{
		ef_darray_append_array(darr, arr, arr_len);
		return ;
	}
	if (rdarr->elem_no + arr_len > rdarr->capacity)
		ef_darray_expand_capacity(darr, arr_len);
	ptr = rdarr->data + rdarr->elem_size * index;
	arr_size = rdarr->elem_size * arr_len;
	move_size = rdarr->elem_size * (rdarr->elem_no - index);
	ft_memmove(ptr + arr_size, ptr, move_size);
	ft_memcpy(ptr, arr, arr_size);
	rdarr->elem_no += arr_len;
}
