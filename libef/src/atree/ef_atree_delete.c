/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_atree_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 11:59:51 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/15 09:49:40 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_atree.h"

/*
** u: the node getting replaced
** v: the node that is going to replace u
*/

static void	transplant(t_atree *tree, t_anode *u, t_anode *v)
{
	if (!u->parent)
		tree->root = v;
	else if (u == u->parent->left)
		u->parent->left = v;
	else
		u->parent->right = v;
	if (v)
		v->parent = u->parent;
}

/*
** z: the starting node and its ancestors which are getting checked balance
** y: the tallest child of z
** x: the tallest child of y
*/

static void	balance(t_atree *tree, t_anode *z)
{
	t_anode	*x, *y;
	int		balance;

	while (z)
	{
		balance = ABS(ef_anode_height(z->left) - ef_anode_height(z->right));
		if (balance > 1)
		{
			y = (ef_anode_height(z->left) > ef_anode_height(z->right)) ?
				z->left : z->right;
			x = (ef_anode_height(y->left) > ef_anode_height(y->right)) ?
				y->left : y->right;
			if (y == z->left && x == y->left)
			{
				ef_anode_right_rotate(tree, z);
				z = y;
			}
			else if (y == z->right && x == y->right)
			{
				ef_anode_left_rotate(tree, z);
				z = y;
			}
			else if (y == z->left && x == y->right)
			{
				ef_anode_left_rotate(tree, y);
				ef_anode_right_rotate(tree, z);
				z = x;
			}
			else
			{
				ef_anode_right_rotate(tree, y);
				ef_anode_left_rotate(tree, z);
				z = x;
			}
		}
		z = z->parent;
	}
}

/*
** z: the node getting deleted from the tree
** y: the (minimum) node that is going to replace z
** x: the node where that function balance starts to travel
*/

void	ef_atree_delete(t_atree *tree, t_anode *z)
{
	t_anode	*w, *x, *y;

	if (!tree || !z)
		return ;
	if (!z->left && !z->right)
	{
		x = z->parent;
		transplant(tree, z, NULL);
	}
	else if (!z->left)
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
		y = ef_anode_minimum(z->right);
		x = (y->right) ? y->right : y->parent;
		if (y->parent == z)
			x = y;
		else
		{
			transplant(tree, y, y->right);
			y->right = z->right;
			y->right->parent = y;
		}
		transplant(tree, z, y);
		y->left = z->left;
		y->left->parent = y;
	}
	for (w = x; w; w = w->parent)
		w->height = 1 + MAX(ef_anode_height(w->left),
							ef_anode_height(w->right));
	balance(tree, x);
	ef_anode_free(z, tree->del_key, tree->del_value);
	tree->size--;
}
