/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_traverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 12:46:45 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 21:52:35 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_ntree_in_order_traverse(t_ntree *tree, int depth, f_trv trv,
									t_traverse_flag part)
{
	t_ntree	*subtree;

	if (!tree || depth == 0)
		return ;
	--depth;
	if (tree->children)
		ef_ntree_in_order_traverse(tree->children, depth, trv, part);
	switch (part)
	{
		case LEAF:
			if (!tree->children)
				tree->data = trv(tree->data);
			break ;
		case NON_LEAF:
			if (tree->children)
				tree->data = trv(tree->data);
			break ;
		case ALL:
			tree->data = trv(tree->data);
			break ;
	}
	if (tree->children)
		for (subtree = tree->children->next; subtree; subtree = subtree->next)
			ef_ntree_in_order_traverse(subtree, depth, trv, part);
}

void	ef_ntree_pre_order_traverse(t_ntree *tree, int depth, f_trv trv,
									t_traverse_flag part)
{
	t_ntree	*subtree;

	if (!tree || depth == 0)
		return ;
	switch (part)
	{
		case LEAF:
			if (!tree->children)
				tree->data = trv(tree->data);
			break ;
		case NON_LEAF:
			if (tree->children)
				tree->data = trv(tree->data);
			break ;
		case ALL:
			tree->data = trv(tree->data);
			break ;
	}
	for (--depth, subtree = tree->children; subtree; subtree = subtree->next)
		ef_ntree_pre_order_traverse(subtree, depth, trv, part);
}

void	ef_ntree_post_order_traverse(t_ntree *tree, int depth, f_trv trv,
										t_traverse_flag part)
{
	t_ntree	*subtree;

	if (!tree || depth == 0)
		return ;
	for (--depth, subtree = tree->children; subtree; subtree = subtree->next)
		ef_ntree_post_order_traverse(subtree, depth, trv, part);
	switch (part)
	{
		case LEAF:
			if (!tree->children)
				tree->data = trv(tree->data);
			break ;
		case NON_LEAF:
			if (tree->children)
				tree->data = trv(tree->data);
			break ;
		case ALL:
			tree->data = trv(tree->data);
			break ;
	}
}

void	ef_ntree_level_order_traverse(t_ntree *tree, int depth, f_trv trv,
										t_traverse_flag part)
{
	t_deque	*this_level;
	t_deque	*next_level;
	t_ntree	*node;

	this_level = ef_deque_new(ef_dlist_new(tree));
	while (!ef_deque_is_empty(this_level) && depth-- != 0)
	{
		next_level = ef_deque_new(NULL);
		while (!ef_deque_is_empty(this_level))
		{
			for (node = ef_deque_pop_head(this_level); node; node = node->next)
			{
				switch (part)
				{
					case LEAF:
						if (!node->children)
							node->data = trv(node->data);
						break ;
					case NON_LEAF:
						if (node->children)
							node->data = trv(node->data);
						break ;
					case ALL:
						node->data = trv(node->data);
						break ;
				}
				if (node->children)
					ef_deque_push_tail(next_level, node->children);
			}
		}
		ef_deque_free(this_level, NULL);
		this_level = next_level;
	}
	ef_deque_free(this_level, NULL);
}

void	ef_ntree_traverse(t_ntree *tree, int depth, f_trv trv, t_flag order,
							t_flag part)
{
	if (!tree || !(IN_ORDER <= order && order <= LEVEL_ORDER) || 
			!(LEAF <= part && part <= ALL) || !trv)
		return ;
	switch (order)
	{
		case IN_ORDER:
			ef_ntree_in_order_traverse(tree, depth, trv, part);
			break ;
		case PRE_ORDER:
			ef_ntree_pre_order_traverse(tree, depth, trv, part);
			break ;
		case POST_ORDER:
			ef_ntree_post_order_traverse(tree, depth, trv, part);
			break ;
		case LEVEL_ORDER:
			ef_ntree_level_order_traverse(tree, depth, trv, part);
			break ;
	}
}		
