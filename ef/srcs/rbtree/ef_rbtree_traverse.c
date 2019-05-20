/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_traverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:16:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 19:26:18 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_rbtree_in_order_traverse(t_rbtree *tree, f_trw trw)
{
	t_deque		*stack;
	t_rbnode	*node;

	stack = ef_deque_create(NULL);
	node = tree->root;
	while (!ef_deque_is_empty(stack) || node)
		if (node != tree->nil)
		{
			ef_deque_push_head(stack, node);
			node = node->left;
		}
		else
		{
			node = ef_deque_pop_head(stack);
			node->value = trw(node->key, node->value);
			node = node->right;
		}
	ef_deque_free(stack, NULL);
}

void	ef_rbtree_pre_order_traverse(t_rbtree *tree, f_trw trw)
{
	t_deque		*stack;
	t_rbnode	*node;

	stack = ef_deque_create(NULL);
	node = tree->root;
	while (!ef_deque_is_empty(stack) || node)
		if (node != tree->nil)
		{
			node->value = trw(node->key, node->value);
			ef_deque_push_head(stack, node);
			node = node->left;
		}
		else
		{
			node = ef_deque_pop_head(stack);
			node = node->right;
		}
	ef_deque_free(stack, NULL);
}

void	ef_rbtree_post_order_traverse(t_rbtree *tree, f_trw trw)
{
	t_deque		*stack1;
	t_deque		*stack2;
	t_rbnode	*node;

	stack1 = ef_deque_create(ef_dlist_create(tree->root));
	stack2 = ef_deque_create(NULL);
	while (!ef_deque_is_empty(stack1))
	{
		node = ef_deque_pop_head(stack1);
		ef_deque_push_head(stack2, node);
		if (node->left != tree->nil)
			ef_deque_push_head(stack1, node->left);
		if (node->right != tree->nil)
			ef_deque_push_head(stack1, node->right);
	}
	while (!ef_deque_is_empty(stack2))
	{
		node = ef_deque_pop_head(stack2);
		node->value = trw(node->key, node->value);
	}
	ef_deque_free(stack1, NULL);
	ef_deque_free(stack2, NULL);
}

void	ef_rbtree_level_order_traverse(t_rbtree *tree, f_trw trw)
{
	t_deque		*queue;
	t_rbnode	*node;

	queue = ef_deque_create(ef_dlist_create(tree->root));
	while (!ef_deque_is_empty(queue))
	{
		node = ef_deque_pop_head(queue);
		node->value = trw(node->key, node->value);
		if (node->left != tree->nil)
			ef_deque_push_tail(queue, node->left);
		if (node->right != tree->nil)
			ef_deque_push_tail(queue, node->right);
	}
	ef_deque_free(queue, NULL);
}

void	ef_rbtree_traverse(t_rbtree *tree, f_trw trw, t_flag order)
{
	if (tree && trw)
		switch (order)
		{
			case IN_ORDER:
				ef_rbtree_in_order_traverse(tree, trw);
				break ;
			case PRE_ORDER:
				ef_rbtree_pre_order_traverse(tree, trw);
				break ;
			case POST_ORDER:
				ef_rbtree_post_order_traverse(tree, trw);
				break ;
			case LEVEL_ORDER:
				ef_rbtree_level_order_traverse(tree, trw);
				break ;
			default:
				ft_dprintf(2, "Warning: invalid order flag\n");
				break ;
		}
}
