/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 15:52:31 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 17:51:04 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_rbtree_free_root(t_rbtree *root, f_del del_key, f_del del_value)
{
	if (del_key)
		del_key(root->key);
	if (del_value)
		del_value(root->value);
	free(root);
}

void	ef_rbtree_free(t_rbtree *tree, f_del del_key, f_del del_value,
						t_flag one_or_all)
{
	t_deque	*stack;

	if (tree)
	{
		if (one_or_all == ONE)
			ef_rbtree_free_root(tree, del_key, del_value);
		else
		{
			stack = ef_deque_new(ef_dlist_new(tree));
			while (!ef_deque_is_empty(stack))
			{
				tree = ef_deque_pop_head(stack);
				if (tree->left)
					ef_deque_push_head(stack, tree->left);
				if (tree->right)
					ef_deque_push_head(stack, tree->right);
				ef_rbtree_free_root(tree, del_key, del_value);
			}
			ef_deque_free(stack, NULL);
		}
	}
}
