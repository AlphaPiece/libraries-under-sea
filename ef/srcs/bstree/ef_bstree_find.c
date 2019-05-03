/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_find.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:55:39 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 17:40:28 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbtree	*ef_bstree_find(t_bstree *tree, void *key)
{
	t_rbtree	*node;

	if (!tree || !key)
		return (NULL);
	node = tree->root;
	while (node)
	{
		if (cmp_key(key, node->key) < 0)
			node = node->left;
		else if (cmp_key(key, node->key) > 0)
			node = node->right;
		else
			return (node);
	}
	return (NULL);
}
