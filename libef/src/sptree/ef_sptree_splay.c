/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_splay.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 13:34:10 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 21:19:21 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_sptree.h"

/*
** x: the node that is going to be root
** y: x's parent, if any
** z: x's grandparent, if any
*/

void	ef_sptree_splay(t_sptree *tree, t_spnode *x)
{
	t_spnode	*y, *z;

	while ((y = x->parent))
		if (!(z = y->parent))
		{
			if (x == y->left)
				ef_spnode_right_rotate(tree, y);
			else
				ef_spnode_left_rotate(tree, y);
		}
		else
		{
			if (y == z->left && x == y->left)
			{
				ef_spnode_right_rotate(tree, z);
				ef_spnode_right_rotate(tree, y);
			}
			else if (y == z->right && x == y->right)
			{
				ef_spnode_left_rotate(tree, z);
				ef_spnode_left_rotate(tree, y);
			}
			else if (y == z->left && x == y->right)
			{
				ef_spnode_left_rotate(tree, y);
				ef_spnode_right_rotate(tree, z);
			}
			else
			{
				ef_spnode_right_rotate(tree, y);
				ef_spnode_left_rotate(tree, z);
			}
		}
}
