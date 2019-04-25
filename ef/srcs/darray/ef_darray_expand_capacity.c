/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_expand_capacity.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 11:28:27 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/25 15:07:44 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_expand_capacity(t_darray *darr, int elem_no)
{
	t_rdarray	*rdarr;

	rdarr = (t_rdarray *)darr;
	rdarr->capacity += elem_no * 2;
	rdarr->data = realloc(rdarr->data, rdarr->capacity * rdarr->elem_size);
	if (!rdarr->data)
		exit(MALLOC_ERROR);
}
