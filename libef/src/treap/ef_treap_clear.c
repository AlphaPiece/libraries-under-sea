/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_treap_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:35:50 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/24 09:40:51 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_treap.h"

void	ef_treap_clear(t_treap *tree)
{
	t_deque		*queue;
	t_trnode	*node;

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
			ef_trnode_free(node, tree->del_key, tree->del_value);
		}
		ef_deque_free(queue, NULL);
		tree->root = NULL;
		tree->size = 0;
	}
}
