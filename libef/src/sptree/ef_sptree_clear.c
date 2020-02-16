/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:39:07 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/21 13:54:11 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_sptree.h"

void	ef_sptree_clear(t_sptree *tree)
{
	t_deque		*queue;
	t_spnode	*node;

	if (tree)
	{
		queue = ef_deque_create(ef_dlist_create(tree->root));
		while (!ef_deque_is_empty(queue))
		{
			node = ef_deque_pop_head(queue);
			if (node->left)
				ef_deque_push_tail(queue, node->left);
			if (node->right)
				ef_deque_push_tail(queue, node->right);
			ef_spnode_free(node, tree->del_key, tree->del_value);
		}
		ef_deque_free(queue, NULL);
	}
}
