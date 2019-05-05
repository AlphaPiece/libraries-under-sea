/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_delete.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 09:23:12 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 11:37:44 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

static void	transplant(t_bstree *tree, t_rbtree *u, t_rbtree *v)
{
	if (!u->parent)
		tree->root = v;
	else if (u == u->parent->left)
		u->parent->left = v;
	else
		u->parent->right = v;
	v->parent = u->parent;
}

static void	fix_up(t_bstree *tree, t_rbtree *x)
{
	t_rbtree	*w;

	while (x != tree->root && x->color == B)
		if (x == x->parent->left)
		{
			w = x->parent->right;
			if (w->color == R)
			{
				w->color = B;
				x->parent->color = R;
				ef_bstree_left_rotate(tree, x->parent);
				w = x->parent->right;
			}
			if ((!w->left || w->left->color == B) &&
					(!w->right || w->right->color == B))
			{
				w->color = R;
				x = x->parent;
			}
			else
			{
				if (!w->right || w->right->color == B)
				{
					w->left->color = B;
					w->color = R;
					ef_bstree_right_rotate(tree, w);
					w = x->parent->right;
				}
				w->color = x->parent->color;
				x->parent->color = B;
				if (w->right)
					w->right->color = B;
				ef_bstree_left_rotate(tree, x->parent);
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
				ef_bstree_right_rotate(tree, x->parent);
				w = x->parent->left;
			}
			if ((!w->right || w->right->color == B) &&
					(!w->left || w->left->color == B))
			{
				w->color = R;
				x = x->parent;
			}
			else
			{
				if (!w->left || w->left->color == B)
				{
					w->right->color = B;
					w->color = R;
					ef_bstree_left_rotate(tree, w);
					w = x->parent->right;
				}
				w->color = x->parent->color;
				x->parent->color = B;
				if (w->left)
					w->left->color = B;
				ef_bstree_right_rotate(tree, x->parent);
				x = tree->root;
			}
		}
	x->color = B;
}

void		ef_bstree_delete(t_bstree *tree, void *key)
{
	t_rbtree	*x, *y, *z;
	t_color		color;

	z = ef_bstree_find(tree, key);
	if (!z)
		return ;
	color = z->color;
	if (!z->left)
	{
		x = z->right;
		transplant(tree, z, z->right);
	}
	else if (!z->right)
	{
		x = z->left;
		transplant(tree, z, z->left);
	}
	else
	{
		y = ef_rbtree_minimum(z->right);
		color = y->color;
		x = y->right;
		if (y->parent != z)
		{
			transplant(tree, y, y->right);
			y->right = z->right;
			y->right->parent = y;
		}
		transplant(tree, z, y);
		y->left = z->left;
		y->left-Parent = y-;
		y->color = z->color;
	}
	if (color == B)
		fix_up(tree, x);
	ef_rbtree_free(z, tree->del_key, tree->del_value, ONE);
	tree->node_no--;
}
