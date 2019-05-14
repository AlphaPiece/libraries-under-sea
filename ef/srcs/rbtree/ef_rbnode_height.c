/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbnode_height.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 20:49:53 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/14 11:59:04 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_rbnode_height(t_rbtree *tree, t_rbnode *node)
{
	int			height;
	t_deque		*queue;
	int			length;

	if (!tree)
		return (-1);
	if (!node)
		return (0);
	height = -1;
	queue = ef_deque_create(ef_dlist_create(node));
	while (!ef_deque_is_empty(queue))
	{
		length = ef_deque_length(queue);
		while (length--)
		{
			node = ef_deque_pop_head(queue);
			if (node->left != tree->nil)
				ef_deque_push_tail(queue, node->left);
			if (node->right != tree->nil)
				ef_deque_push_tail(queue, node->right);
		}
		height++;
	}
	ef_deque_free(queue, NULL);
	return (height);
}
