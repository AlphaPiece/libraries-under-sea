/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_traverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:16:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 11:32:45 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_rbtree_in_order_traverse(t_rbtree *tree, f_trw trw)
{
	t_deque	*stack;

	stack = ef_deque_new(NULL);
	while (true)
		if (tree)
		{
			ef_deque_push_head(stack, tree);
			tree = tree->left;
		}
		else
		{
			if (ef_deque_is_empty(stack))
				break ;
			tree = ef_deque_pop_head(stack);
			tree->value = trw(tree->key, tree->value);
			tree = tree->right;
		}
	ef_deque_free(stack, NULL);
}

void	ef_rbtree_pre_order_traverse(t_rbtree *tree, f_trw trw)
{
	t_deque	*stack;

	if (!tree)
		return ;
	stack = ef_deque_new(ef_dlist_new(tree));
	while (!ef_deque_is_empty(stack))
	{
		tree = ef_deque_pop_head(stack);
		tree->value = trw(tree->key, tree->value);
		if (tree->right)
			ef_deque_push_head(stack, tree->right);
		if (tree->left)
			ef_deque_push_head(stack, tree->left);
	}
	ef_deque_free(stack, NULL);
}

void	ef_rbtree_post_order_traverse(t_rbtree *tree, f_trw trw)
{
	t_deque	*stack;

	if (!tree)
		return ;
	stack = ef_deque_new(NULL);
	do
	{
		while (tree)
		{
			if (tree->right)
				ef_deque_push_head(tree->right);
			ef_deque_push_head(tree);
			tree = tree->left;
		}
		tree = ef_deque_pop_head(stack);
		if (tree->right && ef_deque_peek_head(stack) == tree->right)
		{
			ef_deque_pop_head(stack);
			ef_deque_push_head(stack, tree);
			tree = tree->right;
		}
		else
		{
			tree->value = trw(tree->key, tree->value);
			tree = NULL;
		}
	} while (!ef_deque_is_empty(stack));
	ef_deque_free(stack);
}

void	ef_rbtree_level_order_traverse(t_rbtree *tree, f_trw trw)
{
	int		length;
	t_deque	*queue
	
	queue = ef_deque_new(ef_dlist_new(tree));
	while (!ef_deque_is_empty(queue))
	{
		length = ef_deque_length(queue);
		while (length--)
		{
			tree = ef_deque_pop_head(queue);
			tree->value = trw(tree->key, tree->value);
			if (tree->left)
				ef_deque_push_tail(queue, tree->left);
			if (tree->right)
				ef_deque_push_tail(queue, tree->right);
		}
	}
	ef_deque_free(queue, NULL);
}

void	ef_bstree_traverse(t_bstree *tree, f_trw trw, t_flag order)
{
	if (!tree || !trw)
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
