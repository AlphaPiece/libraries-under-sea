/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_find.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:55:39 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/23 20:30:42 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbnode	*ef_rbtree_find(t_rbtree *tree, void *key)
{
	t_rbnode	*node;
	int			flag;

	if (!tree)
		return (NULL);
	node = tree->root;
	while (node != tree->nil)
		if ((flag = tree->cmp_key(key, node->key)) < 0)
			node = node->left;
		else if (flag > 0)
			node = node->right;
		else
			break ;
	return (node);
}
