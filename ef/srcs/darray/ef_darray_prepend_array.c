/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_prepend_array.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 15:08:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/25 15:13:21 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_darray	*ef_darray_prepend_array(t_darray *darr, void *arr, int arr_len)
{
	return (ef_darray_insert_array(darr, 0, arr, arr_len));
}
