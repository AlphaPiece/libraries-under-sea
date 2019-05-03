/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/25 20:22:05 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 19:03:35 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_darray_free(t_darray *darr, f_del del)
{
	if (darr)
	{
		ef_darray_clear(darr, del);
		free(darr->data);
		free(darr);
	}
}
