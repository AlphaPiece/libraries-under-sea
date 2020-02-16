/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 14:10:15 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 10:53:16 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

t_ntree		*ef_ntree_copy(t_ntree *tree, f_cpy cpy)
{
	t_ntree	*new_tree;
	t_ntree	*subtree;

	if (!tree)
		return (NULL);
	new_tree = ef_ntree_create((cpy) ? cpy(tree->data) : tree->data);
	for (subtree = ef_ntree_last_child(tree); subtree; subtree = subtree->prev)
		ef_ntree_prepend_child(new_tree, ef_ntree_copy(subtree, cpy));
	return (new_tree);
}
