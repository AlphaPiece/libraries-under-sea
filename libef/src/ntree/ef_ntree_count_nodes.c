/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_count_nodes.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:08:54 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 11:21:21 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

int	ef_ntree_count_nodes(t_ntree *tree)
{
	t_ntree	*subtree;
	int		count;

	if (!tree)
		return (0);
	for (count = 0, subtree = tree->children; subtree; subtree = subtree->next)
		count += ef_ntree_count_nodes(subtree);
	return (1 + count);
}
