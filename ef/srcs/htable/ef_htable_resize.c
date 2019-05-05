/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_htable_resize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:13:25 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 22:36:04 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_htable_resize(t_htable *table)
{
	double		factor;
	t_darray	new_array;

	factor = (double)table->elem_no / table->array->length;
	if (factor >= MAX_LOAD)
	{
	}
	else if (factor < MIN_LOAD)
	{
	}
}
