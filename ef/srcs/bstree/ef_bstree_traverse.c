/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_traverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:16:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 17:28:35 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_rbtree_in_order_traverse(t_rbtree *tree, f_trw trw, int depth,
									t_flag part)
{
	if (!tree || depth == 0)
		return ;
	ef_rbtree_in_order_traverse(tree->left, trw, --depth, part);
	switch (part)
	{
		case LEAF:
			if (ef_rbtree_is_leaf(tree))
				tree->value = trw(tree->key, tree->value);
			break ;
		case NON_LEAF:
			if (!ef_rbtree_is_leaf(tree))
				tree->value = trw(tree->key, tree->value);
			break ;
		case WHOLE:
			tree->value = trw(tree->key, tree->value);
			break ;
	}
	ef_rbtree_in_order_traverse(tree->right, trw, depth, part);
}

void	ef_rbtree_pre_order_traverse(t_rbtree *tree, f_trw trw, int depth,
										t_flag part)
{
	if (!tree || depth == 0)
		return ;
	switch (part)
	{
		case LEAF:
			if (ef_rbtree_is_leaf(tree))
				tree->value = trw(tree->key, tree->value);
			break ;
		case NON_LEAF:
			if (!ef_rbtree_is_leaf(tree))
				tree->value = trw(tree->key, tree->value);
			break ;
		case WHOLE:
			tree->value = trw(tree->key, tree->value);
			break ;
	}
	ef_rbtree_pre_order_traverse(tree->left, trw, --depth, part);
	ef_rbtree_pre_order_traverse(tree->right, trw, depth, part);
}

void	ef_rbtree_post_order_traverse(t_rbtree *tree, f_trw trw, int depth,
										t_flag part)
{
	if (!tree || depth == 0)
		return ;
	ef_rbtree_pre_order_traverse(tree->left, trw, --depth, part);
	ef_rbtree_pre_order_traverse(tree->right, trw, depth, part);
	switch (part)
	{
		case LEAF:
			if (ef_rbtree_is_leaf(tree))
				tree->value = trw(tree->key, tree->value);
			break ;
		case NON_LEAF:
			if (!ef_rbtree_is_leaf(tree))
				tree->value = trw(tree->key, tree->value);
			break ;
		case WHOLE:
			tree->value = trw(tree->key, tree->value);
			break ;
	}
}

void	ef_rbtree_level_order_traverse(t_rbtree *tree, f_trw trw, int depth,
										t_flag part)
{
	t_deque		*this_level;
	t_deque		*next_level;
	t_rbtree	*node;
	
	this_level = ef_deque_new(ef_dlist_new(tree));
	next_level = ef_deque_new(NULL);
	while (!ef_deque_is_empty(this_level) && depth-- != 0)
	{
		while (!ef_deque_is_empty(this_level))
		{
			node = ef_deque_pop_head(this_level);
			switch (part)
			{
				case LEAF:
					if (ef_rbtree_is_leaf(node))
						node->value = trw(node->key, node->value);
					break ;
				case NON_LEAF:
					if (!ef_rbtree_is_leaf(node))
						node->value = trw(node->key, node->value);
					break ;
				case WHOLE:
					node->value = trw(node->key, node->value);
					break ;
			}
			if (node->left)
				ef_deque_push_tail(next_level, node->left);
			if (node->right)
				ef_deque_push_tail(next_level, node->right);
		}
		ft_memswap(&this_level, &next_level, sizeof(t_deque *));
	}
	ef_deque_free(this_level, NULL);
	ef_deque_free(next_level, NULL);
}

void	ef_bstree_traverse(t_bstree *tree, f_trw trw, int depth,
							t_flag order, t_flag part)
{
	if (!tree || !(LEAF <= part && part <= WHOLE) || !trw)
		return ;
	switch (order)
	{
		case IN_ORDER:
			ef_rbtree_in_order_traverse(tree->root, trw, depth, part);
			break ;
		case PRE_ORDER:
			ef_rbtree_pre_order_traverse(tree->root, trw, depth, part);
			break ;
		case POST_ORDER:
			ef_rbtree_post_order_traverse(tree->root, trw, depth, part);
			break ;
		case LEVEL_ORDER:
			ef_rbtree_level_order_traverse(tree->root, trw, depth, part);
			break ;
	}
}
