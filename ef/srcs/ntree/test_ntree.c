/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ntree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:08:22 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 17:01:19 by Zexi Wang        ###   ########.fr       */
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

int		main(void)
{
	t_ntree	*tree;
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
	ef_ntree_append_child(tree->children, ef_ntree_new(&arr[3]));
	print_tree(tree);

	return (0);
}
