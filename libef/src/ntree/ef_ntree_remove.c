/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 23:07:45 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 10:22:13 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

t_ntree	*ef_ntree_remove_root(t_ntree *tree)
{
	t_ntree	*first_child;
	t_ntree	*child;
	t_ntree	*last_grandchild;

	if (!tree->children)
	{
		free(tree);
		return (NULL);
	}
	first_child = tree->children;
	child = first_child->next;
	free(tree);
	if (!child)
		return (first_child);
	last_grandchild = ef_ntree_last_child(first_child);
	last_grandchild->next = child;
	child->prev = last_grandchild;
	for ( ; child; child = child->next)
		child->parent = first_child;
	return (first_child);
}

t_ntree	*ef_ntree_remove_child(t_ntree *parent, t_ntree *child)
{
	t_ntree	*prev_child;
	t_ntree	*next_child;
	t_bool	is_head;

	is_head = (parent->children == child) ? true : false;
	prev_child = child->prev;
	next_child = child->next;
	child = ef_ntree_remove_root(child);
	if (child)
	{
		child->prev = prev_child;
		if (prev_child)
			prev_child->next = child;
		child->next = next_child;
		if (next_child)
			next_child->prev = child;
		child->parent = parent;
		if (is_head)
			parent->children = child;
	}
	else if (is_head)
	{
		parent->children = next_child;
		if (next_child)
			next_child->prev = NULL;
	}
	else
	{
		prev_child->next = next_child;
		if (next_child)
			next_child->prev = prev_child;
	}
	return (parent);
}

t_ntree	*ef_ntree_remove(t_ntree *tree, void *data, f_cmp cmp, t_flag order,
							t_flag one_or_all)
{
	t_ntree	*node;

	while ((node = ef_ntree_find(tree, data, cmp, -1, order, WHOLE)))
	{
		if (node->parent)
		{
			node = ef_ntree_remove_child(node->parent, node);
			tree = ef_ntree_root(node);
		}
		else
		{
			node = ef_ntree_remove_root(node);
			tree = node;
		}
		if (one_or_all == ONE)
			break ;
	}
	return (tree);
}
