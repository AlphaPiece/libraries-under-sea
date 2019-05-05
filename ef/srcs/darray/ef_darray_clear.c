/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:28:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 23:35:28 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_clear(t_darray *darr)
{
	int	i;

	if (darr->del)
		for (i = 0; i < darr->length; i++)
			darr->del(darr->data + ef_darray_elem_size(darr) * i);
	darr->length = 0;
}
