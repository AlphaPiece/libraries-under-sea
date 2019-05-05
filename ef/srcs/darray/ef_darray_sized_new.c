/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_sized_new.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 10:09:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 23:51:29 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_darray	*ef_darray_sized_new(size_t elem_size, int arr_len, f_del del)
{
	t_rdarray	*rdarr;

	rdarr = (t_rdarray *)ef_darray_alloc(elem_size, arr_len);
	rdarr->capacity = MAX(arr_len, DARRAY_LEN);
	rdarr->elem_no = 0;
	rdarr->elem_size = elem_size;
	rdarr->del = del;
	return ((t_darray *)rdarr);
}
