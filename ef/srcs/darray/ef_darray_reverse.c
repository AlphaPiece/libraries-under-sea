/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 19:57:39 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/25 20:10:30 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_reverse(t_darray *darr)
{
	int	l;
	int	r;

	l = 0;
	r = ef_darray_length(darr) - 1;
	while (l < r)
		ef_darray_swap(darr, l++, r--);
}
