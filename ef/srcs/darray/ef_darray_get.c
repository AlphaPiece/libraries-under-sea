/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 13:16:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 23:23:03 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_darray_get(t_darray *darr, int index)
{
	if (index < 0 || index >= length)
		return (NULL);
	return (darr->data + ef_darray_elem_size(darr) * index);
}
