/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 19:26:12 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/25 20:14:29 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

static void	quick_sort(t_darray *darr, int l, int r, f_cmp cmp)
{
	int		i;
	int		last;

	if (l >= r)
		return ;
	ef_darray_swap(darr, l, (l + r) / 2);
	last = l;
	i = l;
	while (++i <= r)
		if (cmp(darr->data + ef_darray_elem_size(darr) * i,
				darr->data + ef_darray_elem_size(darr) * l) < 0)
			ef_darray_swap(darr, ++last, i);
	ef_darray_swap(darr, l, last);
	quick_sort(darr, l, last - 1, cmp);
	quick_sort(darr, last + 1, r, cmp);
}

void		ef_darray_sort(t_darray *darr, f_cmp cmp)
{
	if (darr)
		quick_sort(darr, 0, ef_darray_length(darr) - 1, cmp);
}
