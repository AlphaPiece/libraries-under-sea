/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:33:20 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 19:56:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbtree	*ef_rbtree_new(void *key, void *value, t_rbtree *nil)
{
	t_rbtree	*tree;

	tree = ef_rbtree_alloc();
	tree->key = key;
	tree->value = value;
	tree->parent = nil;
	tree->left = nil;
	tree->right = nil;
	tree->color = R;
	return (tree);
}
