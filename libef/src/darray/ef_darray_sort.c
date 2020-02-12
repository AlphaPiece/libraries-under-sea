/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 19:26:12 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/06 22:11:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_darray.h"

static void	quick_sort(t_darray *array, int l, int r, f_cmp cmp)
{
	int		i;
	int		last;

	if (l >= r)
		return ;
	ef_darray_swap(array, l, (l + r) / 2);
	last = l;
	i = l;
	while (++i <= r)
		if (cmp(array->data + array->elem_size * i,
				array->data + array->elem_size * l) < 0)
			ef_darray_swap(array, ++last, i);
	ef_darray_swap(array, l, last);
	quick_sort(array, l, last - 1, cmp);
	quick_sort(array, last + 1, r, cmp);
}

void		ef_darray_sort(t_darray *array, f_cmp cmp)
{
	quick_sort(array, 0, ef_darray_length(array) - 1, cmp);
}
