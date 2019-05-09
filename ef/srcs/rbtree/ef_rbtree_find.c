/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_find.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:55:39 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 15:31:01 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbnode	*ef_rbtree_find(t_rbtree *tree, void *key)
{
	t_rbnode	*node;

	if (!tree)
		return (NULL);
	if (!key)
		return (tree->nil);
	node = tree->root;
	while (node != tree->nil)
	{
		if (tree->cmp_key(key, node->key) < 0)
			node = node->left;
		else if (tree->cmp_key(key, node->key) > 0)
			node = node->right;
		else
			break ;
	}
	return (node);
}
