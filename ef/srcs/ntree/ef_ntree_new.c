/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 09:14:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 09:32:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_ntree	*ef_ntree_new(void *data)
{
	t_ntree	*node;

	if (!(node = (t_ntree *)malloc(sizeof(t_ntree))))
		exit(MALLOC_ERROR);
	node->data = data;
	node->prev = NULL;
	node->next = NULL;
	node->parent = NULL;
	node->children = NULL;
	return (node);
}
