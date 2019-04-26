/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:00:37 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/25 20:15:38 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_swap(t_darray *darr, int index1, int index2)
{
	int	arr_len;

	if (index1 == index2)
		return ;
	arr_len = ef_darray_length(darr);
	if (index1 >= 0 && index1 < arr_len && index2 >= 0 && index2 < arr_len)
		ft_memswap(darr->data + ef_darray_elem_size(darr) * index1,
					darr->data + ef_darray_elem_size(darr) * index2,
					ef_darray_elem_size(darr));
}
