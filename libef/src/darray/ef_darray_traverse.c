/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_traverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 09:34:35 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/07 09:49:16 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

void	ef_darray_traverse(t_darray *array, f_trv trv)
{
	int	i;

	for (i = 0; i < ef_darray_length(array); i++)
		ef_darray_set(array, (t_value)trv((void *)ef_darray_get(array, i)), i);
}
