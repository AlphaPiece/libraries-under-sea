/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:19:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 17:28:20 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_sptree.h"

void	ef_sptree_set(t_sptree *tree, void *key, void *value)
{
	t_spnode	*node;

	if (tree)
	{
		if (!tree->root)
			tree->root = ef_spnode_create(key, value);
		else
		{
			node = ef_sptree_find(tree, key);
			if (node)
				node->value = value;
			else
			{
				node = ef_spnode_create(key, value);
				if (tree->cmp_key(key, tree->root->key) < 0)
				{
					node->right = tree->root;
					node->left = tree->root->left;
					tree->root->left = NULL;
					tree->root->parent = node;
					tree->root = node;
				}
				else
				{
					node->left = tree->root;
					node->right = tree->root->right;
					tree->root->right = NULL;
					tree->root->parent = node;
					tree->root = node;
				}
			}
		}
	}
}
