/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ntree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:08:22 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:26:13 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"
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

void	print_node(t_ntree *node)
{
	ft_printf("\nnode: %d\n", (node) ? *(int *)node->data : -1);
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

void	test(void)
{
	t_ntree	*tree;
	t_ntree	*new_tree;
	t_ntree	*node;
	int		arr[] = {0,1,2,3,4,5,6,7,8};
	int		n;

	tree = ef_ntree_create(&arr[0]);
	assert(tree->data == &arr[0]);
	assert(tree->prev == NULL);
	assert(tree->next == NULL);
	assert(tree->parent == NULL);
	assert(tree->children == NULL);

	ef_ntree_append_child(tree, ef_ntree_create(&arr[1]));
	ef_ntree_prepend_child(tree, ef_ntree_create(&arr[2]));
	ef_ntree_append_child(tree, ef_ntree_create(&arr[4]));
	ef_ntree_insert_child(tree, ef_ntree_create(&arr[5]), 1);
	ef_ntree_append_child(tree->children, ef_ntree_create(&arr[3]));
	ef_ntree_insert_child_before(tree, ef_ntree_create(&arr[6]), NULL);
	ef_ntree_insert_child_after(tree, ef_ntree_create(&arr[7]), tree->children);
	ef_ntree_append_child(tree->children, ef_ntree_create(&arr[1]));
	ef_ntree_prepend_child(tree->children->next, ef_ntree_create(&arr[3]));

	ef_ntree_traverse(tree, print, -1, IN_ORDER, WHOLE);
	ft_printf("\n");
	print_children(tree);

/*	ef_ntree_reverse_children(tree);
	print_children(tree);
*/
/*	new_tree = ef_ntree_copy(tree, NULL);
	print_tree(new_tree);
	ft_printf("%p, %p\n", tree, new_tree);
*/
//	ef_ntree_traverse(tree, print, -1, LEVEL_ORDER, WHOKE);
//	ft_printf("\n");

/*	n = 7;
	node = ef_ntree_find(tree, &n, cmp_int, -1, POST_ORDER, WHOLE);
	print_node(node);

//	node = ef_ntree_root(node);
//	print_node(node);
	node = ef_ntree_first_child(node->parent);
	print_node(node);
	node = ef_ntree_last_child(node->parent);
	print_node(node);
	node = ef_ntree_nth_child(node->parent, 4);
	print_node(node);
	node = ef_ntree_first_sibling(node);
	print_node(node);
	node = ef_ntree_last_sibling(node);
	print_node(node);
	node = ef_ntree_prev_sibling(node);
	print_node(node);
	node = ef_ntree_next_sibling(node);
	print_node(node);
*/
/*	tree = ef_ntree_remove(tree, &arr[3], cmp_int, LEVEL_ORDER, ALL);
	ef_ntree_traverse(tree, print, -1, IN_ORDER, WHOLE);
	ft_printf("\n");
	print_children(tree);
*/
/*	new_tree = tree->children->next;
	ef_ntree_unlink(new_tree);
	ef_ntree_traverse(tree, print, -1, IN_ORDER, WHOLE);
	ft_printf("\n");
	print_children(tree);
	ef_ntree_traverse(new_tree, print, -1, IN_ORDER, WHOLE);
	ft_printf("\n");
*/
	ef_ntree_sort_children(tree, cmp_int);
	print_children(tree);

	ef_ntree_rotate_children(tree, 10);
	print_children(tree);

	ef_ntree_free(tree, NULL, ALL);
}

int		main(void)
{
	test();

//	while (1);

	return (0);
}
