/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sgtree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 23:08:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/30 10:47:51 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

#define COUNT	10

void	btview(t_sgnode *node, int space)
{
	if (!node)
		return ;
	space += COUNT;
	btview(node->right, space);
	ft_putchar('\n');
	ft_putnchar(' ', space - COUNT);
	ft_printf("%s", node->key);
	ft_putchar('\n');
	btview(node->left, space);
}

void	view_tree(t_sgtree *tree)
{
	if (!tree)
		return ;
	btview(tree->root, 0);
	ft_printf("\nsize: %d\n", ef_sgtree_size(tree));
	ft_printf("========================\n");
}

int		cmp_str(void *s1, void *s2)
{
	return (ft_strcmp((const char *)s1, (const char *)s2));
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
	ft_printf("%s, ", (char *)key);
	return (value);
}

void	test(void)
{
	t_sgtree	*tree;
	t_sgtree	*tree2;
	t_sgnode	*root;
	t_sgnode	*node;
	int			i;
	char		*arr[] = {"a","b","c","d","e","f","g","h","i","j"};

	tree = ef_sgtree_create(cmp_str, NULL, NULL);
	for (i = 0; i < 10; i += 1)
		ef_sgtree_insert(tree, ef_sgnode_create(arr[i], arr[i]));
	ef_sgtree_traverse(tree, print_key);
	ft_printf("\n");
	view_tree(tree);
/*
	tree2 = ef_sgtree_create(cmp_int, NULL, NULL);
	for (i = 0; i < 8; i += 1)
		ef_sgtree_insert(tree2, ef_sgnode_create(&arr[i], &arr[i]));
	view_tree(tree);
*/
/*
	ef_sgtree_delete(tree, ef_sgtree_find(tree, "c"));
	view_tree(tree);
	ef_sgtree_delete(tree, ef_sgtree_find(tree, "g"));
	view_tree(tree);

	ef_sgtree_remove(tree, "c");
	view_tree(tree);
	ef_sgtree_remove(tree, "g");
	view_tree(tree);

	ft_printf("get: %s\n", ef_sgtree_get(tree, "c"));
	ft_printf("get: %s\n", ef_sgtree_get(tree, "i"));
	
	ef_sgtree_traverse(tree, print_key);
	ft_printf("\n");

	ef_sgtree_free(tree);
*/
}

int		main(void)
{
	test();

//	while (1);

	return (0);
}
