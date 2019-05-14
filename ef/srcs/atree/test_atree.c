/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 23:08:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/13 23:09:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

#define COUNT	10

void	btview(t_atree *tree, t_anode *node, int space)
{
	if (!node)
		return ;
	space += COUNT;
	btview(tree, node->right, space);
	ft_putchar('\n');
	ft_putnchar(' ', space - COUNT);
	ft_printf("%d-%d", *(int *)node->key, node->height);
	ft_putchar('\n');
	btview(tree, node->left, space);
}

void	view_tree(t_atree *tree)
{
	btview(tree, tree->root, 0);
	ft_printf("\n========================\n");
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

int		main(void)
{
	t_atree	*tree;
	t_anode	*node;
	int		arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
	int		i;

	tree = ef_atree_create(cmp_int, NULL, NULL);

	for (i = 0; i < 16; i++)
		ef_atree_insert(tree, ef_anode_create(&arr[i], &arr[i]));
	
//	view_tree(tree);

	for (i = 0; i < 9; i++)
		ef_atree_delete(tree, ef_atree_find(tree, &arr[i]));
	view_tree(tree);

	ef_atree_delete(tree, ef_atree_find(tree, &arr[9]));
	view_tree(tree);

	return (0);
}
