/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_height.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 20:49:53 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 18:55:51 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_bstree_height(t_bstree *tree)
{
	int			height;
	t_deque		*queue;
	t_rbtree	*node;
	int			length;

	if (!tree)
		return (-1);
	height = 0;
	queue = ef_deque_new(ef_dlist_new(tree->root));
	while (!ef_deque_is_empty(queue))
	{
		length = ef_deque_length(queue);
		while (length--)
		{
			node = ef_deque_pop_head(queue);
			if (node->left)
				ef_deque_push_tail(queue, node->left);
			if (node->right)
				ef_deque_push_tail(queue, node->right);
		}
		height++;
	}
	ef_deque_free(queue, NULL);
	return (height);
}
