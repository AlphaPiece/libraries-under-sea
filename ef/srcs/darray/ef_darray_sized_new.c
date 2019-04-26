/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_sized_new.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 10:09:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/25 20:49:16 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_darray	*ef_darray_sized_new(size_t elem_size, size_t arr_size)
{
	t_rdarray	*rdarr;

	arr_size = (arr_size > MIN_SIZE) ? arr_size : MIN_SIZE;
	if (!(rdarr = (t_rdarray *)malloc(sizeof(t_rdarray))) ||
			!(rdarr->data = malloc(arr_size)))
		exit(MALLOC_ERROR);
	rdarr->capacity = arr_size / elem_size;
	rdarr->elem_no = 0;
	rdarr->elem_size = elem_size;
	return ((t_darray *)rdarr);
}
