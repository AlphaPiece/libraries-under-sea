/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbnode_minimum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 11:59:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/13 12:46:27 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbnode	*ef_rbnode_minimum(t_rbtree *tree, t_rbnode *node)
{
	if (!tree || !node)
		return (NULL);
	if (node == tree->nil)
		return (tree->nil);
	while (node->left != tree->nil)
		node = node->left;
	return (node);
}
