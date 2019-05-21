/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_split.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 21:20:35 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/21 11:21:26 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_sptree	*ef_sptree_split(t_sptree *tree, void *key)
{
	t_spnode	*node;
	t_sptree	*new_tree;

	if (!tree)
		return (NULL);
	new_tree = ef_sptree_create(tree->cmp_key, tree->del_key, tree->del_value);
	node = ef_sptree_find(tree, key);
	new_tree->root = node;
	if (node)
	{
		tree->root = node->left;
		if (tree->root)
			tree->root->parent = NULL;
		node->left = NULL;
	}
	return (new_tree);
}
