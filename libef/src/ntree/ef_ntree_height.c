/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_height.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:43:19 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 21:03:31 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

int	ef_ntree_height(t_ntree *tree)
{
	int		height;
	t_ntree	*subtree;

	if (!tree)
		return (0);
	height = 0;
	for (subtree = tree->children; subtree; subtree = subtree->next)
		height = MAX(height, ef_ntree_height(subtree));
	return (1 + height);
}
