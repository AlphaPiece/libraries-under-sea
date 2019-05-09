/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 20:17:50 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 15:35:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_rbtree_set(t_rbtree *tree, void *key, void *value)
{
	t_rbnode	*node;
	
	if (!tree)
		return ;
	if ((node = ef_rbtree_find(tree, key)) != tree->nil)
		node->value = value;
	else
	{
		node = ef_rbnode_new(key, value, tree->nil);
		ef_rbtree_insert(tree, node);
	}
}

