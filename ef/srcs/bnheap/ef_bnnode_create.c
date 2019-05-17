/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnnode_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:26:39 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 09:28:39 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_bnnode	*ef_bnnode_create(void *key, void *value)
{
	t_bnnode	*node;

	node = ef_bnnode_alloc();
	node->key = key;
	node->value = value;
	node->child = NULL;
	node->sibling = NULL;
	node->parent = NULL;
	node->degree = 0;
	return (node);
}
