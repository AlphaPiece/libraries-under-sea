/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_last_child.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 14:35:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 17:18:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

t_ntree	*ef_ntree_last_child(t_ntree *parent)
{
	t_ntree	*child;

	if (!parent || !parent->children)
		return (NULL);
	for (child = parent->children; child->next; child = child->next)
		;
	return (child);
}
