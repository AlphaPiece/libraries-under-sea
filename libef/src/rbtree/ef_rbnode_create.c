/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbnode_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:33:20 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/13 20:34:51 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbnode	*ef_rbnode_create(t_rbtree *tree, void *key, void *value)
{
	t_rbnode	*node;

	node = ef_rbnode_alloc();
	node->key = key;
	node->value = value;
	node->parent = tree->nil;
	node->left = tree->nil;
	node->right = tree->nil;
	node->color = R;
	return (node);
}
