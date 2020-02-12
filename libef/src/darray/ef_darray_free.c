/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 21:52:34 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/06 22:32:14 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

void	ef_darray_free(t_darray *array, f_del del)
{
	if (array)
	{
		ef_darray_clear(array, del);
		if (array->data)
			free(array->data);
		free(array);
	}
}
