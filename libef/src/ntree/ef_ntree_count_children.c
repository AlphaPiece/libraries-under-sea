/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_count_children.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:09:41 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 09:08:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

int	ef_ntree_count_children(t_ntree *parent)
{
	t_ntree	*child;
	int		count;

	if (!parent)
		return (0);
	for (count = 0, child = parent->children; child; child = child->next)
		count++;
	return (count);
}
