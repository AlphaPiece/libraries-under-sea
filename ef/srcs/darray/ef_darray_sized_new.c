/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_sized_new.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 10:09:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 13:47:25 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_darray	*ef_darray_sized_new(size_t elem_size, size_t arr_size)
{
	t_rdarray	*rdarr;

	rdarr = (t_rdarray *)ef_darray_alloc(arr_size);
	rdarr->capacity = MAX(arr_size, DARRAY_SIZE) / elem_size;
	rdarr->elem_no = 0;
	rdarr->elem_size = elem_size;
	return ((t_darray *)rdarr);
}
