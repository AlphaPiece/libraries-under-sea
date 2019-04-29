/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ntree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:08:22 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 18:26:08 by Zexi Wang        ###   ########.fr       */
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

int		main(void)
{
	t_ntree	*tree;
	t_ntree	*node;
	int		arr[] = {0,1,2,3,4,5,6,7};

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
/*	ef_ntree_pre_order_traverse(tree, 2, print, NON_LEAF);
//	ef_ntree_post_order_traverse(tree, 2, print, ALL);
//	ef_ntree_in_order_traverse(tree, 2, print, ALL);
//	ef_ntree_level_order_traverse(tree, 1, print, ALL);
	ef_ntree_traverse(tree, -1, print, PRE_ORDER, ALL);
	ft_printf("\n");
*/
	
	return (0);
}
