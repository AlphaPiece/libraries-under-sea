/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_maximum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 12:00:31 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 12:00:37 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbnode	*ef_rbtree_maximum(t_rbtree *tree, t_rbnode *node)
{
	if (!tree || !node)
		return (NULL);
	if (node == tree->nil)
		return (tree->nil);
	while (node->right != tree->nil)
		node = node->right;
	return (node);
}
