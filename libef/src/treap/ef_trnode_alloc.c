/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_trnode_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:08:26 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:11:48 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_treap.h"

t_trnode	*ef_trnode_alloc(void)
{
	t_trnode	*node;

	if (!(node = (t_trnode *)malloc(sizeof(t_trnode))))
	{
		perror("malloc");
		exit(1);
	}
	return (node);
}
