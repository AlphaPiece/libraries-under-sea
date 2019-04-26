/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_remove_range.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 18:58:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/25 20:35:13 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_remove_range(t_darray *darr, int index, int len)
{
	t_rdarray	*rdarr;
	void		*ptr;
	size_t		move_size;

	if (!darr)
		return ;
	rdarr = (t_rdarray *)darr;
	if (index >= rdarr->elem_no || index + len > rdarr->elem_no ||
			rdarr->elem_no == 0 || index < 0 || len <= 0)
		return ;
	ptr = rdarr->data + rdarr->elem_size * index;
	move_size = rdarr->elem_size * (rdarr->elem_no - index - len);
	ft_memmove(ptr, ptr + rdarr->elem_size * len, move_size);
	rdarr->elem_no -= len;
}
