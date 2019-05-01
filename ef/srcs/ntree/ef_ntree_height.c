/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_height.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:43:19 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 09:08:49 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_ntree_height(t_ntree *tree)
{
	int		height;
	t_ntree	*subtree;

	height = 0;
	while (tree)
		for (subtree = tree->children; subtree; subtree = subtree->next)
			height = MAX(height, ef_ntree_height(subtree));
	return (height + ((tree) ? 1 : 0));
}
