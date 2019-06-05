/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sgtree_insert.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:38:55 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/29 19:53:03 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"
#include <stdio.h>
#include <math.h>

static int const log32(int n) 
{ 
    double const log23 = 2.4663034623764317; 
    return (int)ceil(log23 * log(n)); 
} 

void	ef_sgtree_insert(t_sgtree *tree, t_sgnode *z)
{
	t_sgnode	*x, *y;

	if (!tree || !z)
		return ;
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
	tree->size++;
//	ft_printf("log: %d\n", (int)ft_ceil(ft_log(tree->size, 3.0 / 2.0)));
//	if ((double)ef_sgnode_depth(z) > (int)ft_ceil(ft_log(tree->size, 3.0 / 2.0)))
	int	m = ef_sgnode_depth(z);
	int	n = log32(tree->size);
	printf("m: %d, n: %d\n", m, n);
	if (ef_sgnode_depth(z) > log32(tree->size))
	{
		while (z->parent && 3 * ef_sgnode_size(z) < 2 * ef_sgnode_size(z->parent))
			z = z->parent;
		printf("rebuild\n");
		ef_sgnode_rebuild(tree, z->parent);
	}
}
