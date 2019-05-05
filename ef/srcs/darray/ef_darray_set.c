/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 23:23:27 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 23:35:38 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_set(t_darray *darr, void *data, int index)
{
	void	*ptr;

	if (index >= 0 && index < darr->length)
	{
		ptr = darr->data + ef_darray_elem_size(darr) * index;
		if (darr->del)
			darr->del(ptr);
		ft_memcpy(ptr, data, ef_darray_elem_size(darr));
	}
}	
