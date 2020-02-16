/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 15:56:45 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 16:00:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_bheap.h"

void	ef_bheap_free(t_bheap *heap)
{
	if (heap)
	{
		ef_bheap_clear(heap);
		free(heap);
	}
}
