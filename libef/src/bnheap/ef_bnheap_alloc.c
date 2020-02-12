/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:29:34 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 09:32:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_bnheap	*ef_bnheap_alloc(void)
{
	t_bnheap	*heap;

	if (!(heap = (t_bnheap *)malloc(sizeof(t_bnheap))))
		exit(MALLOC_ERROR);
	return (heap);
}
