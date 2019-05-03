/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_copy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:11:34 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 17:25:52 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbtree	*ef_rbtree_copy(t_rbtree *tree, f_cpy cpy_key, f_cpy cpy_value)
{
	t_rbtree	*new_tree;

	if (!tree)
		return (NULL);
	new_tree = ef_rbtree_new((cpy_key) ? cpy_key(tree->key) : tree->key, 
								(cpy_value) ?
								cpy_value(tree->value) : tree->value);
	new_tree->left = ef_rbtree_copy(tree->left, cpy_key, cpy_value);
	new_tree->right = ef_rbtree_copy(tree->right, cpy_key, cpy_value);
	return (new_tree);
}

t_bstree	*ef_bstree_copy(t_bstree *tree)
{
	t_bstree	*new_tree;

	new_tree = ef_bstree_new(tree->cmp_key, tree->cpy_key, tree->cpy_value,
								tree->del_key, tree->del_value);
	new_tree->root = ef_rbtree_copy(tree->root, tree->cpy_key, tree->cpy_value);
	new_tree->size = tree->size;
	return (new_tree);
}
