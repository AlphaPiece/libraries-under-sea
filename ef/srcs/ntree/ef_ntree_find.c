/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 12:46:45 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 22:08:36 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_ntree	*ef_ntree_in_order_find(t_ntree *tree, void *data, int depth, f_cmp cmp,
								t_find_flag part)
{
	t_ntree	*subtree;
	t_ntree	*node;

	if (!tree || depth == 0)
		return (NULL);
	--depth;
	if (tree->children)
	{
		node = ef_ntree_in_order_find(tree->children, data, depth, cmp, part);
		if (node)
			return (node);
	}
	switch (part)
	{
		case LEAF:
			if (!tree->children && cmp(tree->data, data) == 0)
				return (tree);
			break ;
		case NON_LEAF:
			if (tree->children && cmp(tree->data, data) == 0)
				return (tree);
			break ;
		case ALL:
			if (cmp(tree->data, data) == 0)
				return (tree);
			break ;
	}
	if (tree->children)
		for (subtree = tree->children->next; subtree; subtree = subtree->next)
		{
			node = ef_ntree_in_order_find(subtree, data, depth, cmp, part);
			if (node)
				return (node);
		}
	return (NULL);
}

void	ef_ntree_pre_order_find(t_ntree *tree, void *data, int depth, f_cmp cmp,
								t_find_flag part)
{
	t_ntree	*subtree;

	if (!tree || depth == 0)
		return (NULL);
	switch (part)
	{
		case LEAF:
			if (!tree->children && cmp(tree->data, data) == 0)
				return (tree);
			break ;
		case NON_LEAF:
			if (tree->children && cmp(tree->data, data) == 0)
				return (tree);
			break ;
		case ALL:
			if (cmp(tree->data, data) == 0)
				return (tree);
			break ;
	}
	for (--depth, subtree = tree->children; subtree; subtree = subtree->next)
	{
		node = ef_ntree_pre_order_find(subtree, data, depth, cmp, part);
		if (node)
			return (node);
	}
	return (NULL);
}

void	ef_ntree_post_order_find(t_ntree *tree, void *data, int depth,
									f_cmp cmp, t_find_flag part)
{
	t_ntree	*subtree;

	if (!tree || depth == 0)
		return ;
	for (--depth, subtree = tree->children; subtree; subtree = subtree->next)
	{
		node = ef_ntree_post_order_find(subtree, depth, cmp, part);
		if (node)
			return (node);
	}
	switch (part)
	{
		case LEAF:
			if (!tree->children && cmp(tree->data, data) == 0)
				return (tree);
			break ;
		case NON_LEAF:
			if (tree->children && cmp(tree->data, data))
				return (tree);
			break ;
		case ALL:
			if (cmp(tree->data, data))
				return (tree);
			break ;
	}
	return (NULL);
}

void	ef_ntree_level_order_find(t_ntree *tree, void *data, int depth,
									f_cmp cmp, t_find_flag part)
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
						if (!node->children && cmp(node->data, data) == 0)
						{
							ef_deque_free(this_level, NULL);
							ef_deque_free(next_level, NULL);
							return (node);
						}
						break ;
					case NON_LEAF:
						if (node->children && cmp(node->data, data) == 0)
						{
							ef_deque_free(this_level, NULL);
							ef_deque_free(next_level, NULL);
							return (node);
						}
						break ;
					case ALL:
						if (cmp(node->data, data) == 0)
						{
							ef_deque_free(this_level, NULL);
							ef_deque_free(next_level, NULL);
							return (node);
						}
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
	return (NULL);
}

t_ntree	*ef_ntree_find(t_ntree *tree, void *data, int depth, f_cmp cmp,
						t_flag order, t_flag part)
{
	if (!tree || !(IN_ORDER <= order && order <= LEVEL_ORDER) || 
			!(LEAF <= part && part <= ALL) || !cmp)
		return ;
	switch (order)
	{
		case IN_ORDER:
			return (ef_ntree_in_order_find(tree, data, depth, cmp, part));
		case PRE_ORDER:
			return (ef_ntree_pre_order_find(tree, data, depth, cmp, part));
		case POST_ORDER:
			return (ef_ntree_post_order_find(tree, data, depth, cmp, part));
		case LEVEL_ORDER:
			return (ef_ntree_level_order_find(tree, data, depth, cmp, part));
	}
}		
