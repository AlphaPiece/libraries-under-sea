/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 21:51:55 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/07 10:07:57 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_clear(t_darray *array, f_del del)
{
	int	i;

	if (array)
	{
		if (del)
			for (i = 0; i < array->length; i++)
				del((void *)ef_darray_get(array, i));
		array->length = 0;
	}
}
