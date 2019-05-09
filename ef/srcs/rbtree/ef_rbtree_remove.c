/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_remove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 20:33:21 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 15:16:29 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_rbtree_remove(t_rbtree *tree, void *key)
{
	t_rbnode	*node;
	void		*value;

	if (!tree)
		return (NULL);
	node = ef_rbtree_find(tree, key);
	value = NULL;
	if (node != tree->nil)
	{
		value = node->value;
		ef_rbtree_delete(tree, node);
	}
	return (value);
}
