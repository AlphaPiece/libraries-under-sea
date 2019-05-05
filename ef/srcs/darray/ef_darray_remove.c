/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_remove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:30:39 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 23:41:31 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_remove(t_darray *darr, int index)
{
	t_rdarray	*rdarr;
	void		*ptr;
	size_t		move_size;

	if (!darr)
		return ;
	rdarr = (t_rdarray *)darr;
	if (index >= rdarr->elem_no || rdarr->elem_no == 0 || index < 0)
		return ;
	if (index != rdarr->elem_no - 1)
	{
		ptr = rdarr->data + rdarr->elem_size * index;
		if (darr->del)
			darr->del(ptr);
		move_size = rdarr->elem_size * (rdarr->elem_no - 1 - index);
		ft_memmove(ptr, ptr + rdarr->elem_size, move_size);
	}
	rdarr->elem_no--;
}
