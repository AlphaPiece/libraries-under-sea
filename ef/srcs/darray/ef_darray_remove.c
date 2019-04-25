/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_remove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:30:39 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/25 19:07:39 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_darray	*ef_darray_remove(t_darray *darr, int index)
{
	t_rdarray	*rdarr;
	void		*ptr;
	size_t		move_size;

	if (!darr)
		return (NULL);
	rdarr = (t_rdarray *)darr;
	if (index >= rdarr->elem_no || rdarr->elem_no == 0)
		return (darr);
	if (index < 0)
		index = 0;
	if (index != rdarr->elem_no - 1)
	{
		ptr = rdarr->data + rdarr->elem_size * index;
		move_size = rdarr->elem_size * (rdarr->elem_no - 1 - index);
		ft_memmove(ptr, ptr + rdarr->elem_size, move_size);
	}
	rdarr->elem_no--;
	return (darr);
}
