/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sgnode_rebuild.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:19:02 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/30 11:02:14 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

static void	load_array(t_darray *array, t_sgnode *node)
{
	t_darray	*stack;

	stack = ef_darray_create(sizeof(t_sgnode *), 0);
	while (ef_darray_length(stack) || node)
		if (node)
		{
			ef_darray_append(stack, (t_value)node);
			node = node->left;
		}
		else
		{
			node = (t_sgnode *)ef_darray_pop(stack);
			ef_darray_append(array, (t_value)node);
			node = node->right;
		}
	ef_darray_free(stack, NULL);
}

#include <stdio.h>

void	*print_key(void *key, void *value);

void	ef_sgnode_rebuild(t_sgtree *tree, t_sgnode *node)
{
	t_darray	*array, *lindex, *rindex;
	int			l, r, m, lc, rc;
	t_sgnode	*parent, *left, *right, *root, *tmp;

	if (!tree || !node)
		return ;
	parent = node->parent;
	array = ef_darray_create(sizeof(t_sgnode *), 0);
	lindex = ef_darray_create(sizeof(int), 0);
	rindex = ef_darray_create(sizeof(int), 0);
	load_array(array, node);
	tmp = node;
	ef_darray_append(lindex, 0);
	ef_darray_append(rindex, ef_darray_length(array) - 1);

	printf("size: %d\n", ef_sgnode_size(node));

	while (ef_darray_length(lindex))
	{
		printf("length: %d\n", ef_darray_length(lindex));
		l = ef_darray_pop(lindex);
		r = ef_darray_pop(rindex);
		m = (l + r) / 2;
		printf("l: %d, r: %d, m: %d\n", l, r, m);
		node = (t_sgnode *)ef_darray_get(array, m);
		if (r > m)
		{
			right = (t_sgnode *)ef_darray_get(array, (m + r) / 2 + 1);
			print_key(right->key, right->value);
			node->right = right;
			right->parent = node;
			ef_darray_append(lindex, m + 1);
			ef_darray_append(rindex, r);
			printf("here\n");
		}
		else
		{
			node->left = NULL;
			node->right = NULL;
		}
		if (l < m)
		{
			left = (t_sgnode *)ef_darray_get(array, (l + m) / 2);
			print_key(left->key, left->value);
			node->left = left;
			left->parent = node;
			ef_darray_append(lindex, l);
			ef_darray_append(rindex, m - 1);
			printf("or here\n");
		}
		else
		{
			node->left = NULL;
			node->right = NULL;
		}
	}
	root = (t_sgnode *)ef_darray_get(array, (ef_darray_length(array) - 1) / 2);
	root->parent = parent;
	if (!parent)
		tree->root = root;
	else if (tmp == parent->left)
		parent->left = root;
	else
		parent->right = root;
}
