/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 09:14:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 10:52:05 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_ntree	*ef_ntree_create(void *data)
{
	t_ntree	*node;

	node = ef_ntree_alloc();
	node->data = data;
	node->prev = NULL;
	node->next = NULL;
	node->parent = NULL;
	node->children = NULL;
	return (node);
}
