/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:57:19 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 13:00:39 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_bheap	*ef_bheap_alloc(void)
{
	t_bheap	*heap;

	if (!(heap = (t_bheap *)malloc(sizeof(t_bheap))))
		exit(MALLOC_ERROR);
	return (heap);
}
