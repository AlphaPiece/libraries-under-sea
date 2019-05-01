/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:22:05 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 12:15:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_free(t_darray *darr, f_del del)
{
	int	i;

	if (darr)
	{
		if (del)
			for (i = 0; i < darr->elem_no; i++)
				del(darr->data + (ef_darray_elem_size(darr) * i));
		free(darr->data);
		free(darr);
	}
}
