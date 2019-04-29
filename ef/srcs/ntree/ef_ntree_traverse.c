/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_traverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 12:46:45 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 18:24:15 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_ntree_traverse(t_ntree *tree, int depth, f_mfy mfy,
							t_traverse_flag order, t_traverse_flag part)
{
	if (!tree || !(IN_ORDER <= order && order <= LEVEL_ORDER) || 
			!(LEAF <= part && part <= ALL) || !mfy)
		return ;
	switch (order)
	{
		case IN_ORDER:
			ef_ntree_in_order_traverse(tree, depth, mfy, part);
			break ;
		case PRE_ORDER:
			ef_ntree_pre_order_traverse(tree, depth, mfy, part);
			break ;
		case POST_ORDER:
			ef_ntree_post_order_traverse(tree, depth, mfy, part);
			break ;
		case LEVEL_ORDER:
			ef_ntree_level_order_traverse(tree, depth, mfy, part);
			break ;
	}
}		
