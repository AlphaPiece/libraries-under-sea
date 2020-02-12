/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 23:08:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 17:31:44 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

#define COUNT	10

void	btview(t_anode *node, int space)
{
	if (!node)
		return ;
	space += COUNT;
	btview(node->right, space);
	ft_putchar('\n');
	ft_putnchar(' ', space - COUNT);
	ft_printf("%d-%d-%d", *(int *)node->key, *(int *)node->value, node->height);
	ft_putchar('\n');
	btview(node->left, space);
}

void	view_tree(t_atree *tree)
{
	btview(tree->root, 0);
	ft_printf("\nsize: %d, height: %d\n", ef_atree_size(tree),
				ef_anode_height(tree->root));
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
	t_atree	*tree;
	t_anode	*node;
	int		arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int		i;

	tree = ef_atree_create(cmp_int, NULL, NULL);

	for (i = 0; i < 16; i++)
		ef_atree_set(tree, &arr[i], &arr[i]);
	ef_atree_set(tree, &arr[3], &arr[6]);
	ef_atree_set(tree, &arr[2], &arr[8]);
	view_tree(tree);
	ef_atree_traverse(tree, print_key, LEVEL_ORDER);
	ft_printf("\n");

	ft_printf("%d\n", *(int *)ef_atree_get(tree, &arr[2]));
	ft_printf("%d\n", *(int *)ef_atree_get(tree, &arr[3]));

	for (i = 0; i < 10; i++)
		ef_atree_remove(tree, &arr[i]);
	view_tree(tree);
	ef_atree_traverse(tree, print_key, LEVEL_ORDER);
	ft_printf("\n");

	ef_atree_free(tree);
}

int		main(void)
{
	test();

//	while (1);

	return (0);
}
