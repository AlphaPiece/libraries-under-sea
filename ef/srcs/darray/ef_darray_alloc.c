/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_darray_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:21:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 13:26:03 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_darray	*ef_darray_alloc(size_t arr_size)
{
	t_rdarray	*rdarr;

	if (!(rdarr = (t_rdarray *)malloc(sizeof(t_rdarray))) ||
			!(rdarr->data = malloc(sizeof(MAX(arr_size, MIN_SIZE)))))
		exit(MALLOC_ERROR);
	return ((t_darray *)rdarr);
}
