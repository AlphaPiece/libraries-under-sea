/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 11:09:33 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 17:12:38 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

static void	left_rotate(t_bstree *tree, t_rbtree *x)
{
	t_rbtree	*y;

	if (x && x->right)
	{
		y = x->right;
		x->right = y->left;
		if (y->left)
			y->left->parent = x;
		y->parent = x->parent;
		if (!x->parent)
			tree->root = y;
		else if (x == x->parent->left)
			x->parent->left = y;
		else
			x->parent->right = y;
		y->left = x;
		x->parent = y;
	}
}

static void	right_rotate(t_bstree *tree, t_rbtree *x)
{
	t_rbtree	*y;

	if (x && x->left)
	{
		y = x->left;
		x->left = y->right;
		if (y->right)
			y->right->parent = x;
		y->parent = x->parent;
		if (!x->parent)
			tree->root = y;
		else if (x == x->parent->left)
			x->parent->left = y;
		else
			x->parent->right = y;
		y->right = x;
		x->parent = y;
	}
}

static void	fix_up(t_bstree *tree, t_rbtree *z)
{
	t_rbtree	*x, *y;

	while (z->parent && z->parent->parent && z->parent->color == R)
		if (z->parent == z->parent->parent->left)
		{
			y = z->parent->parent->right;
			if (y && y->color == R)
			{
				z->parent->color = y->color = B;
				z->parent->parent->color = R;
				z = z->parent->parent;
			}
			else
			{
				if (z == z->parent->right)
					left_rotate(tree, (z = z->parent));
				z->parent->color = B;
				z->parent->parent->color = R;
				right_rotate(tree, z->parent->parent);
			}
		}
		else
		{
			y = z->parent->parent->left;
			if (y && y->color == R)
			{
				z->parent->color = y->color = B;
				z->parent->parent->color = R;
				z = z->parent->parent;
			}
			else
			{
				if (z == z->parent->left)
					right_rotate(tree, (z = z->parent));
				z->parent->color = B;
				z->parent->parent->color = R;
				left_rotate(tree, z->parent->parent);
			}
		}
	tree->root->color = B;
}

void		ef_rbtree_insert(t_bstree *tree, void *key, void *value)
{
	t_rbtree	*x, *y, *z;

	y = NULL;
	z = ef_rbtree_new(key, value);
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
	fix_up(tree, z);
	tree->size++;
}
