/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_spnode_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:15:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:04:16 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_sptree.h"

t_spnode	*ef_spnode_alloc(void)
{
	t_spnode	*node;

	if (!(node = (t_spnode *)malloc(sizeof(t_spnode))))
	{
		perror("malloc");
		exit(1);
	}
	return (node);
}
