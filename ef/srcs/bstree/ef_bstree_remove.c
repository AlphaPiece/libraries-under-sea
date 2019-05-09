/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_remove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 20:33:21 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 20:52:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_bstree_remove(t_bstree *tree, void *key)
{
	t_rbtree	*node;
	void		*value;

	if (!tree)
		return (NULL);
	node = ef_bstree_find(tree, key);
	value = NULL;
	if (node != tree->nil)
	{
		value = node->value;
		ef_bstree_delete(tree, node);
	}
	return (value);
}
