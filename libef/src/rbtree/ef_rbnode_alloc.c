/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbnode_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:31:36 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:46:29 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_rbtree.h"

t_rbnode	*ef_rbnode_alloc(void)
{
	t_rbnode	*node;

	if (!(node = (t_rbnode *)malloc(sizeof(t_rbnode))))
	{
		perror("malloc");
		exit(1);
	}
	return (node);
}
