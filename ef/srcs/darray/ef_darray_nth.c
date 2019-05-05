/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_nth.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 13:16:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 13:18:54 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_darray_nth(t_darray *darr, int n)
{
	if (n < 0 || n >= length)
		return (NULL);
	return (darr->data + ef_darray_elem_size(darr) * n);
}
