/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 19:57:39 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/06 22:10:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_reverse(t_darray *array)
{
	int	l;
	int	r;

	l = 0;
	r = ef_darray_length(array) - 1;
	while (l < r)
		ef_darray_swap(array, l++, r--);
}
