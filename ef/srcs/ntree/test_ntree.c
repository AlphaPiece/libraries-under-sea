/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ntree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:08:22 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 06:52:19 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"
#include <assert.h>

void	_print_tree(t_ntree *tree)
{
	t_ntree	*subtree;

	if (!tree)
		return ;
	ft_printf("%d, ", *(int *)tree->data);
	for (subtree = tree->children; subtree; subtree = subtree->next)
		_print_tree(subtree);
}

void	print_tree(t_ntree *tree)
{
	_print_tree(tree);
	ft_printf("\n");
}

void	print_children(t_ntree *tree)
{
	t_ntree	*node;

	ft_printf("f: ");
	for (node = tree->children; node; node = node->next)
		ft_printf("%d, ", *(int *)node->data);
	ft_printf("\nb: ");
	for (node = ef_ntree_last_child(tree); node; node = node->prev)
		ft_printf("%d, ", *(int *)node->data);
	ft_printf("\n");
}

void	*print(void *data)
{
	ft_printf("%d, ", *(int *)data);
	return (data);
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
	t_ntree	*tree;
	t_ntree	*node;
	int		arr[] = {0,1,2,3,4,5,6,7,8};

	tree = ef_ntree_new(&arr[0]);
	assert(tree->data == &arr[0]);
	assert(tree->prev == NULL);
	assert(tree->next == NULL);
	assert(tree->parent == NULL);
	assert(tree->children == NULL);

	ef_ntree_append_child(tree, ef_ntree_new(&arr[1]));
	ef_ntree_prepend_child(tree, ef_ntree_new(&arr[2]));
	ef_ntree_append_child(tree, ef_ntree_new(&arr[4]));
	ef_ntree_insert_child(tree, ef_ntree_new(&arr[5]), 1);
	ef_ntree_append_child(tree->children, ef_ntree_new(&arr[3]));
	ef_ntree_insert_child_before(tree, ef_ntree_new(&arr[6]), NULL);
	ef_ntree_insert_child_after(tree, ef_ntree_new(&arr[7]), tree->children);

	print_tree(tree);
	print_children(tree);

/*	ef_ntree_reverse_children(tree);
	print_children(tree);
*/
//	ef_ntree_traverse(tree, print, -1, LEVEL_ORDER, ALL);
//	ft_printf("\n");

	node = ef_ntree_find(tree, &arr[3], NULL, -1, PRE_ORDER, LEAF);
	ft_printf("\nnode: %d\n", (node) ? *(int *)node->data : -1);

	return (0);
}
