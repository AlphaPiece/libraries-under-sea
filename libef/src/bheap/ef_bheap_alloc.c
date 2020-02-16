/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bheap_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 12:57:19 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:24:53 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_bheap.h"

t_bheap	*ef_bheap_alloc(void)
{
	t_bheap	*heap;

	if (!(heap = (t_bheap *)malloc(sizeof(t_bheap))))
	{
		perror("malloc");
		exit(1);
	}
	return (heap);
}
