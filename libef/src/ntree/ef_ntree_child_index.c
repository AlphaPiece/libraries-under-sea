/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_child_index.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 22:53:50 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 23:02:55 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

int	ef_ntree_child_index(t_ntree *parent, t_ntree *child)
{
	int		i;
	t_ntree	*subtree;

	if (parent && child)
	{
		i = 0;
		for (subtree = parent->children; subtree; i++, subtree = subtree->next)
			if (subtree == child)
				return (i);
	}
	return (-1);
}
