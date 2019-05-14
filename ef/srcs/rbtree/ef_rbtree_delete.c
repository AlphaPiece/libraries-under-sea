/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 09:23:12 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/14 11:57:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

/*
** u: the node gettting replaced
** v: the node that is going to replace u
*/

static void	transplant(t_rbtree *tree, t_rbnode *u, t_rbnode *v)
{
	if (u->parent == tree->nil)
		tree->root = v;
	else if (u == u->parent->left)
		u->parent->left = v;
	else
		u->parent->right = v;
	v->parent = u->parent;
}

/*
** x: the starting node
** w: the sibling of x
*/

static void	fix_up(t_rbtree *tree, t_rbnode *x)
{
	t_rbnode	*w;

	while (x != tree->root && x->color == B)
		if (x == x->parent->left)
		{
			w = x->parent->right;
			if (w->color == R)
			{
				w->color = B;
				x->parent->color = R;
				ef_rbnode_left_rotate(tree, x->parent);
				w = x->parent->right;
			}
			if (w->left->color == B && w->right->color == B)
			{
				w->color = R;
				x = x->parent;
			}
			else
			{
				if (w->right->color == B)
				{
					w->left->color = B;
					w->color = R;
					ef_rbnode_right_rotate(tree, w);
					w = x->parent->right;
				}
				w->color = x->parent->color;
				x->parent->color = B;
				w->right->color = B;
				ef_rbnode_left_rotate(tree, x->parent);
				x = tree->root;
			}
		}
		else
		{
			w = x->parent->left;
			if (w->color == R)
			{
				w->color = B;
				x->parent->color = R;
				ef_rbnode_right_rotate(tree, x->parent);
				w = x->parent->left;
			}
			if (w->right->color == B && w->left->color == B)
			{
				w->color = R;
				x = x->parent;
			}
			else
			{
				if (w->left->color == B)
				{
					w->right->color = B;
					w->color = R;
					ef_rbnode_left_rotate(tree, w);
					w = x->parent->right;
				}
				w->color = x->parent->color;
				x->parent->color = B;
				w->left->color = B;
				ef_rbnode_right_rotate(tree, x->parent);
				x = tree->root;
			}
		}
	x->color = B;
}

/*
** z: the node getting deleted from the tree
** y: the (minimum) node that is going to replace z
** x: the starting node for function fix_up
** color: y's original color
*/

void		ef_rbtree_delete(t_rbtree *tree, t_rbnode *z)
{
	t_rbnode	*x, *y;
	t_color		color;

	if (!tree || !z || z == tree->nil)
		return ;
	y = z;
	color = y->color;
	if (z->left == tree->nil)
	{
		x = z->right;
		transplant(tree, z, z->right);
	}
	else if (z->right == tree->nil)
	{
		x = z->left;
		transplant(tree, z, z->left);
	}
	else
	{
		y = ef_rbnode_minimum(tree, z->right);
		color = y->color;
		x = y->right;
		if (y->parent == z)
			x->parent = y;
		else
		{
			transplant(tree, y, y->right);
			y->right = z->right;
			y->right->parent = y;
		}
		transplant(tree, z, y);
		y->left = z->left;
		y->left->parent = y;
		y->color = z->color;
	}
	if (color == B)
		fix_up(tree, x);
	ef_rbnode_free(z, tree->del_key, tree->del_value);
	tree->size--;
}
