/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_fiheap_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:37:46 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/06/05 09:42:41 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_fiheap	*ef_fiheap_alloc(void)
{
	t_fiheap	*heap;

	if (!(heap = (t_fiheap *)malloc(sizeof(t_fiheap))))
		exit(MALLOC_ERROR);
	return (heap);
}
