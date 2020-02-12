/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_remove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 21:11:53 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/06 21:49:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

void	ef_darray_remove(t_darray *array, t_value value)
{
	int	i;

	for (i = 0; i < ef_darray_length(array); i++)
		if (ef_darray_get(array, i) == value)
		{
			ef_darray_delete(array, i);
			break ;
		}
}
