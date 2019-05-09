/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbnode_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:33:20 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 15:08:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbnode	*ef_rbnode_new(void *key, void *value, t_rbnode *nil)
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
