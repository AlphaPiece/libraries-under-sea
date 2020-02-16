/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnnode_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:25:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:33:25 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_bnheap.h"

t_bnnode	*ef_bnnode_alloc(void)
{
	t_bnnode	*node;

	if (!(node = (t_bnnode *)malloc(sizeof(t_bnnode))))
	{
		perror("malloc");
		exit(1);
	}
	return (node);
}
