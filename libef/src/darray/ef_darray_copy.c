/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 22:41:10 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/06 22:48:19 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

t_darray	*ef_darray_copy(t_darray *array, f_cpy cpy)
{
	return (ef_darray_partition(array, 0, ef_darray_length(array), cpy));
}
