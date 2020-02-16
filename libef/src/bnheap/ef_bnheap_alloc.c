/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnheap_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:29:34 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:32:54 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_bnheap.h"

t_bnheap	*ef_bnheap_alloc(void)
{
	t_bnheap	*heap;

	if (!(heap = (t_bnheap *)malloc(sizeof(t_bnheap))))
	{
		perror("malloc");
		exit(1);
	}
	return (heap);
}
