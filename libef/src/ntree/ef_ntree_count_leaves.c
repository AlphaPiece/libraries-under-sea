/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_count_leaves.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 21:04:41 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 09:56:47 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

int	ef_ntree_count_leaves(t_ntree *tree)
{
	int		count;
	t_ntree	*subtree;

	if (!tree)
		return (0);
	if (!tree->children)
		return (1);
	count = 0;
	for (subtree = tree->children; subtree; subtree = subtree->next)
		count += ef_ntree_count_leaves(subtree);
	return (count);
}
