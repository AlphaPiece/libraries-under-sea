/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_reverse_children.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 10:17:39 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 10:26:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

void	ef_ntree_reverse_children(t_ntree *parent)
{
	t_ntree	*prev;
	t_ntree	*child;

	prev = NULL;
	child = parent->children;
	while (child)
	{
		prev = child;
		child = child->next;
		prev->next = prev->prev;
		prev->prev = child;
	}
	parent->children = prev;
}
