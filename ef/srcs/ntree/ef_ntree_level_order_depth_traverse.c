/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_level_order_depth_traverse.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 14:23:24 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 16:58:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_ntree_level_order_depth_traverse(t_ntree *tree, int depth, f_mfy mfy,
											t_traverse_flag part)
{
	t_deque	*queue;
	t_deque	*this_level;
	t_deque	*next_level;
	t_ntree	*node;

	this_level = ef_deque_new(ef_dlist_new(tree));
	while (!ef_deque_is_empty(this_level) && depth-- != 0)
	{
		next_level = ef_deque_new(NULL);
		while (!ef_deque_is_empty(this_level))
		{
			for (node = ef_deque_pop_head(this_level); node; node = node->next)
			{
				switch (part)
				{
					case LEAF:
						if (!tree->children)
						tree->data = mfy(tree->data);
						break ;
					case NON_LEAF:
						if (tree->children)
							tree->data = mfy(tree->data);
						break ;
					case ALL:
						tree->data = mfy(tree->data);
						break ;
				}
				if (node->children)
					ef_deque_push_tail(next_level, node->children);
			}
		}
		ef_deque_free_queue(this_level);
		this_level = next_level;
	}
	ef_deque_free_queue(queue);
}
											
