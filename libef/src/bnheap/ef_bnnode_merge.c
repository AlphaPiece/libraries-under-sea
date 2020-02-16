/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnnode_merge.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 10:25:31 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 20:56:35 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_bnheap.h"

static t_bnnode	*merge_sibling(t_bnnode *node1, t_bnnode *node2)
{
	t_bnnode	*origin;
	t_bnnode	*node;

	node = origin = ef_bnnode_alloc();
	while (node1 && node2)
	{
		if (node1->degree <= node2->degree)
		{
			node->sibling = node1;
			node = node->sibling;
			node1 = node1->sibling;
		}
		else
		{
			node->sibling = node2;
			node = node->sibling;
			node2 = node2->sibling;
		}
	}
	node->sibling = (node1) ? node1 : node2;
	node = origin->sibling;
	ef_bnnode_free(origin, NULL, NULL);
	return (node);
}

static void		prepend_child(t_bnnode *node1, t_bnnode *node2)
{
	node2->parent = node1;
	node2->sibling = node1->children;
	node1->children = node2;
	node1->degree++;
}

t_bnnode		*ef_bnnode_merge(t_bnnode *node1, t_bnnode *node2,
									f_cmp cmp_key)
{
	t_bnnode	*head;
	t_bnnode	*prev;
	t_bnnode	*curr;
	t_bnnode	*next;
	t_bnnode	*sibling;

	if (!node1)
		return (node2);
	if (!node2)
		return (node1);
	prev = NULL;
	curr = head = merge_sibling(node1, node2);
	while (curr->sibling)
	{
		next = curr->sibling;
		if (curr->degree != next->degree || (next->sibling &&
				next->degree == next->sibling->degree))
		{
			prev = curr;
			curr = next;
		}
		else if (cmp_key(curr->key, next->key) <= 0)
		{
			sibling = next->sibling;
			prepend_child(curr, next);
			curr->sibling = sibling;
		}
		else
		{
			if (prev)
				prev->sibling = next;
			prepend_child(next, curr);
			if (curr == head)
				head = next;
			curr = next;
		}
	}
	return (head);
}
