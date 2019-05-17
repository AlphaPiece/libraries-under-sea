/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 10:53:13 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 11:38:40 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bheap_delete(t_bheap *heap, int index)
{
	int			parent;
	t_kvpair	*pair;

	index++;
	if (heap && 0 <= index && index < ef_bheap_size(heap))
	{
		 parent = PARENT(index);
	}
}
