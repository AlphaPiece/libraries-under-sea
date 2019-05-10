/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbnode_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:33:20 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 10:56:06 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbnode	*ef_rbnode_create(void *key, void *value, t_rbnode *nil)
{
	t_rbnode	*node;

	node = ef_rbnode_alloc();
	node->key = key;
	node->value = value;
	node->parent = nil;
	node->left = nil;
	node->right = nil;
	node->color = R;
	return (node);
}
