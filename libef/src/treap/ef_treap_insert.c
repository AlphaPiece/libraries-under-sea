/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_treap_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:49:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/23 20:54:20 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_treap.h"

/*
** z: the node that just got inserted into the tree
*/

static void	heapify_up(t_treap *tree, t_trnode *z)
{
	while (z->parent && z->priority > z->parent->priority)
		if (z == z->parent->left)
			ef_trnode_right_rotate(tree, z->parent);
		else
			ef_trnode_left_rotate(tree, z->parent);
}

/*
** z: the node getting inserted
** y: the node that is going to be the parent of z
** x: the node used to travel up and down
*/

void		ef_treap_insert(t_treap *tree, t_trnode *z)
{
	t_trnode	*x, *y;

	y = NULL;
	x = tree->root;
	while (x)
	{
		y = x;
		if (tree->cmp_key(z->key, x->key) < 0)
			x = x->left;
		else
			x = x->right;
	}
	z->parent = y;
	if (!y)
		tree->root = z;
	else if (tree->cmp_key(z->key, y->key) < 0)
		y->left = z;
	else
		y->right = z;
	heapify_up(tree, z);
	tree->size++;
}
	
