/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_level_order_traverse.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 14:46:34 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 18:05:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_ntree_level_order_traverse(t_ntree *tree, f_mfy mfy,
										t_traverse_flag part)
{
	t_deque	*queue;
	t_ntree	*node;

	queue = ef_deque_new(ef_dlist_new(tree));
	while (!ef_deque_is_empty(queue))
	{
		for (node = ef_deque_pop_head(queue); node; node = node->next)
		{
			switch (part)
			{
				case LEAF:
					if (!node->children)
						node->data = mfy(node->data);
					break ;
				case NON_LEAF:
					if (node->children)
						node->data = mfy(node->data);
					break ;
				case ALL:
					node->data = mfy(node->data);
					break ;
			}
			if (node->children)
				ef_deque_push_tail(queue, node->children);
		}
	}
	ef_deque_free_queue(queue);
}
