/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_prepend_child.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 17:26:03 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 10:28:45 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_ntree_prepend_child(t_ntree *parent, t_ntree *child)
{
	if (!parent || !child)
		return ;
	child->parent = parent;
	child->prev = NULL;
	child->next = parent->children;
	parent->children = child;
	if (child->next)
		child->next->prev = child;
}
