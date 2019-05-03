/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 06:11:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 13:46:48 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_darray	*ef_darray_new(size_t elem_size)
{
	t_rdarray	*rdarr;

	rdarr = (t_rdarray *)ef_darray_alloc(DARRAY_SIZE);
	rdarr->capacity = DARRAY_SIZE / elem_size;
	rdarr->elem_no = 0;
	rdarr->elem_size = elem_size;
	return ((t_darray *)rdarr);
}
