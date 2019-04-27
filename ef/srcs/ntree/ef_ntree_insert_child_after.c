/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_insert_child_after.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 10:03:37 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/27 10:07:40 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_ntree_insert_child_after(t_ntree *parent, t_ntree *child,
									t_ntree *sibling)
{
	if (!parent || !child)
		return ;
	else if (!sibling)
		ef_ntree_prepend_child(parent, child);
	else
	{
		sibling->next->prev = child;
		child->next = sibling->next;
		child->prev = sibling;
		sibling->next->prev = child;
	}
}
