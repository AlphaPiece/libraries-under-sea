/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sptree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 23:08:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/21 13:55:23 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

#define COUNT	10

void	btview(t_spnode *node, int space)
{
	if (!node)
		return ;
	space += COUNT;
	btview(node->right, space);
	ft_putchar('\n');
	ft_putnchar(' ', space - COUNT);
	ft_printf("%d", *(int *)node->key);
	ft_putchar('\n');
	btview(node->left, space);
}

void	view_tree(t_sptree *tree)
{
	if (!tree)
		return ;
	btview(tree->root, 0);
	ft_printf("\nsize: %d\n", ef_sptree_size(tree));
	ft_printf("========================\n");
}

int		cmp_int(void *n1, void *n2)
{
	if (*(int *)n1 > *(int *)n2)
		return (1);
	else if (*(int *)n1 < *(int *)n2)
		return (-1);
	else
		return (0);
}

void	*print_key(void *key, void *value)
{
	ft_printf("%d, ", *(int *)key);
	return (value);
}

void	test(void)
{
	t_sptree	*tree;
	t_sptree	*tree2;
	t_spnode	*root;
	t_spnode	*node;
	int			arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int			i;
	int			brr[] = {100,50,200,40,30,20};

	tree = ef_sptree_create(cmp_int, NULL, NULL);
	for (i = 0; i < 8; i += 1)
		ef_sptree_set(tree, &arr[i], &arr[i]);
	view_tree(tree);
/*
	tree2 = ef_sptree_create(cmp_int, NULL, NULL);
	for (i = 0; i < 8; i += 1)
		ef_sptree_insert(tree2, ef_spnode_create(&arr[i], &arr[i]));
	view_tree(tree);
*/
/*	ef_sptree_set(tree, &arr[3], &arr[3]);
	view_tree(tree);
	ef_sptree_set(tree, &arr[4], &arr[4]);
	view_tree(tree);
	ef_sptree_set(tree, &arr[3], &arr[3]);
	view_tree(tree);
*/
/*	ef_sptree_delete(tree, tree->root->left->left);
	view_tree(tree);
	ef_sptree_delete(tree, tree->root->left->left);
	view_tree(tree);
*/
/*	ef_sptree_remove(tree, &arr[3]);
	view_tree(tree);
	ef_sptree_remove(tree, &arr[6]);
	view_tree(tree);
*/
/*	tree2 = ef_sptree_split(tree, &arr[3]);
	view_tree(tree);
	view_tree(tree2);

	tree = ef_sptree_join(tree, tree2);
	view_tree(tree);
*/
/*	ft_printf("get: %d\n", *(int *)ef_sptree_get(tree, &arr[3]));
	view_tree(tree);
	ft_printf("get: %s\n", ef_sptree_get(tree, &arr[8]));
	view_tree(tree);
*/
	ef_sptree_traverse(tree, print_key);
	ft_printf("\n");

	ef_sptree_free(tree);
}

int		main(void)
{
	test();

	while (1);

	return (0);
}
