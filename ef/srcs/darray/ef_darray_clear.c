/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:28:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 13:37:32 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_clear(t_darray *darr, f_del del)
{
	int	i;

	if (del)
		for (i = 0; i < darr->length; i++)
			del(darr->data + ef_darray_elem_size(darr) * i);
	darr->length = 0;
}
