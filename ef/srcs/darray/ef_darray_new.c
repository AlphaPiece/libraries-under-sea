/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 06:11:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/25 14:16:02 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_darray	*ef_darray_new(size_t elem_size)
{
	t_rdarray	*rdarr;

	if (!(rdarr = (t_rdarray *)malloc(sizeof(t_rdarray))) ||
			!(rdarr->data = malloc(sizeof(MIN_SIZE))))
		exit(MALLOC_ERROR);
	rdarr->capacity = MIN_SIZE / elem_size;
	rdarr->elem_no = 0;
	rdarr->elem_size = elem_size;
	return ((t_darray *)rdarr);
}
