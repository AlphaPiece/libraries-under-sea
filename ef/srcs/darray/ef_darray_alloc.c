/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:21:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 23:49:51 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_darray	*ef_darray_alloc(size_t elem_size, int arr_len)
{
	t_rdarray	*rdarr;

	if (!(rdarr = (t_rdarray *)malloc(sizeof(t_rdarray))) ||
			!(rdarr->data = malloc(MAX(arr_len * elem_size,
										DARRAY_LEN * elem_size))))
		exit(MALLOC_ERROR);
	return ((t_darray *)rdarr);
}
