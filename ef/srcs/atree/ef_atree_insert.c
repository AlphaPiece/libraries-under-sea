/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_atree_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 20:27:59 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/14 11:26:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

/*
** z: the first unbalanced node
** w: the starting node
*/

static void	balance(t_atree *tree, t_anode *w)
{
	t_anode	*z;
	int		balance;

	while (w->parent && w->parent->parent)
	{
		z = w->parent->parent;
		balance = ABS(ef_anode_height(z->left) - ef_anode_height(z->right));
		if (balance > 1)
		{
			if (z->left && w == z->left->left)
				ef_anode_right_rotate(tree, z);
			else if (z->right && w == z->right->right)
				ef_anode_left_rotate(tree, z);
			else if (z->left && w == z->left->right)
			{
				ef_anode_left_rotate(tree, z->left);
				ef_anode_right_rotate(tree, z);
			}
			else
			{
				ef_anode_right_rotate(tree, z->right);
				ef_anode_left_rotate(tree, z);
			}
			for (z = z->parent->parent; z; z = z->parent)
				z->height = 1 + MAX(ef_anode_height(z->left),
									ef_anode_height(z->right));
			break ;
		}
		w = w->parent;
	}
}

/*
** z: the node getting inserted
** y: the node that is going to be the parent of z
** x: the node used to travel up and down
*/

void		ef_atree_insert(t_atree *tree, t_anode *z)
{
	t_anode	*x, *y;

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
	for (x = y; x; x = x->parent)
		x->height = 1 + MAX(ef_anode_height(x->left),
							ef_anode_height(x->right));
	balance(tree, z);
	tree->size++;
}
