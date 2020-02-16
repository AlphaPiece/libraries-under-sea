/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbnode_maximum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 12:00:31 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/13 12:46:58 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_rbtree.h"

t_rbnode	*ef_rbnode_maximum(t_rbtree *tree, t_rbnode *node)
{
	if (!tree || !node)
		return (NULL);
	if (node == tree->nil)
		return (tree->nil);
	while (node->right != tree->nil)
		node = node->right;
	return (node);
}
