/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 14:10:15 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 18:47:51 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_ntree		*ef_ntree_copy(t_ntree *tree)
{
	t_ntree	*new_tree;
	t_ntree	*subtree;

	if (!tree)
		return (NULL);
	new_tree = ef_ntree_new(tree->data);
	for (subtree = ef_ntree_last_child(tree); subtree; subtree = subtree->prev)
		ef_ntree_prepend_child(new_tree, ef_ntree_copy(subtree));
	return (new_tree);
}
