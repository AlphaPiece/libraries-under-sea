/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_traverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 12:46:45 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 20:19:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

void	ef_ntree_in_order_traverse(t_ntree *tree, f_trv trv, int depth,
									t_flag part)
{
	t_ntree	*subtree;

	if (!tree || depth == 0)
		return ;
	--depth;
	ef_ntree_in_order_traverse(tree->children, trv, depth, part);
	switch (part)
	{
		case LEAF:
			if (ef_ntree_is_leaf(tree))
				tree->data = trv(tree->data);
			break ;
		case NON_LEAF:
			if (!ef_ntree_is_leaf(tree))
				tree->data = trv(tree->data);
			break ;
		case WHOLE:
			tree->data = trv(tree->data);
			break ;
	}
	if (tree->children)
		for (subtree = tree->children->next; subtree; subtree = subtree->next)
			ef_ntree_in_order_traverse(subtree, trv, depth, part);
}

void	ef_ntree_pre_order_traverse(t_ntree *tree, f_trv trv, int depth,
									t_flag part)
{
	t_ntree	*subtree;

	if (!tree || depth == 0)
		return ;
	switch (part)
	{
		case LEAF:
			if (ef_ntree_is_leaf(tree))
				tree->data = trv(tree->data);
			break ;
		case NON_LEAF:
			if (!ef_ntree_is_leaf(tree))
				tree->data = trv(tree->data);
			break ;
		case WHOLE:
			tree->data = trv(tree->data);
			break ;
	}
	for (--depth, subtree = tree->children; subtree; subtree = subtree->next)
		ef_ntree_pre_order_traverse(subtree, trv, depth, part);
}

void	ef_ntree_post_order_traverse(t_ntree *tree, f_trv trv, int depth,
										t_flag part)
{
	t_ntree	*subtree;

	if (!tree || depth == 0)
		return ;
	for (--depth, subtree = tree->children; subtree; subtree = subtree->next)
		ef_ntree_post_order_traverse(subtree, trv, depth, part);
	switch (part)
	{
		case LEAF:
			if (ef_ntree_is_leaf(tree))
				tree->data = trv(tree->data);
			break ;
		case NON_LEAF:
			if (!ef_ntree_is_leaf(tree))
				tree->data = trv(tree->data);
			break ;
		case WHOLE:
			tree->data = trv(tree->data);
			break ;
	}
}

void	ef_ntree_level_order_traverse(t_ntree *tree, f_trv trv, int depth,
										t_flag part)
{
	t_deque	*this_level;
	t_deque	*next_level;
	t_ntree	*node;

	this_level = ef_deque_create(ef_dlist_create(tree));
	next_level = ef_deque_create(NULL);
	while (!ef_deque_is_empty(this_level) && depth-- != 0)
	{
		while (!ef_deque_is_empty(this_level))
			for (node = ef_deque_pop_head(this_level); node; node = node->next)
			{
				switch (part)
				{
					case LEAF:
						if (ef_ntree_is_leaf(node))
							node->data = trv(node->data);
						break ;
					case NON_LEAF:
						if (!ef_ntree_is_leaf(node))
							node->data = trv(node->data);
						break ;
					case WHOLE:
						node->data = trv(node->data);
						break ;
				}
				if (node->children)
					ef_deque_push_tail(next_level, node->children);
			}
		ft_memswap(&this_level, &next_level, sizeof(t_deque *));
	}
	ef_deque_free(this_level, NULL);
	ef_deque_free(next_level, NULL);
}

void	ef_ntree_traverse(t_ntree *tree, f_trv trv, int depth, t_flag order,
							t_flag part)
{
	if (!tree || !(LEAF <= part && part <= WHOLE) || !trv)
		return ;
	switch (order)
	{
		case IN_ORDER:
			ef_ntree_in_order_traverse(tree, trv, depth, part);
			break ;
		case PRE_ORDER:
			ef_ntree_pre_order_traverse(tree, trv, depth, part);
			break ;
		case POST_ORDER:
			ef_ntree_post_order_traverse(tree, trv, depth, part);
			break ;
		case LEVEL_ORDER:
			ef_ntree_level_order_traverse(tree, trv, depth, part);
			break ;
		default:
			ft_dprintf(2, "Warning: invalid order flag\n");
			break ;
	}
}		
