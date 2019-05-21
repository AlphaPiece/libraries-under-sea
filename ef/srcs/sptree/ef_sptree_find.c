/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_find.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:03:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 21:14:56 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_spnode	*ef_sptree_find(t_sptree *tree, void *key)
{
	t_spnode	*node;
	t_spnode	*parent;
	int			flag;

	if (!tree || !tree->root)
		return (NULL);
	node = tree->root;
	while (node)
	{
		parent = node;
		if ((flag = tree->cmp_key(key, node->key)) < 0)
			node = node->left;
		else if (flag > 0)
			node = node->right;
		else
			break ;
	}
	if (node)
		ef_sptree_splay(tree, node);
	else
		ef_sptree_splay(tree, parent);
	return (node);
}
