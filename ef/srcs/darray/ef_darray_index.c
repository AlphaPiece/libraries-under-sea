/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 21:50:03 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 15:10:06 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_darray_index(t_darray *array, t_value value)
{
	int	i;

	for (i = 0; i < ef_darray_length(array); i++)
		if (ef_darray_get(array, i) == value)
			return (i);
	return (-1);
}
