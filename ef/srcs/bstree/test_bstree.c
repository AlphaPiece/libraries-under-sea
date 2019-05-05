/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bstree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 09:23:07 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 11:36:03 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int		cmp_int(void *n1, void *n2)
{
	if (*(int *)n1 > *(int *)n2)
		return (1);
	else if (*(int *)n1 < *(int *)n2)
		return (-1);
	else
		return (0);
}

void	*print_both(void *key, void *value)
{
	ft_printf("%d, %s\n", *(int *)key, (char *)value);
	return (value);
}

void	*print_key(void *key, void *value)
{
	ft_printf("%d, ", *(int *)key);
	return (value);
}

void	_print_tree(t_rbtree *tree)
{
	if (!tree)
		return ;
	_print_tree(tree->left);
	ft_printf("%d-", *(int *)tree->key);
	ft_printf((tree->color == R) ? "R, " : "B, ");
	_print_tree(tree->right);
}

void	print_tree(t_bstree *tree)
{
	_print_tree(tree->root);
	ft_printf("\n");
}

int		main(void)
{
	t_bstree	*tree;
	int			arr[] = {0,1,2,3,4,5,6,7,8};

	tree = ef_bstree_new(cmp_int, NULL, NULL, NULL, NULL);
	ef_bstree_insert(tree, &arr[8], "8");
	ef_bstree_insert(tree, &arr[7], "7");
	ef_bstree_insert(tree, &arr[6], "6");
	ef_bstree_insert(tree, &arr[5], "5");
	ef_bstree_insert(tree, &arr[4], "4");
	ef_bstree_insert(tree, &arr[3], "3");
	ef_bstree_insert(tree, &arr[2], "2");

	print_tree(tree);

//	ef_bstree_delete(tree, &arr[7]);

	return (0);
}
