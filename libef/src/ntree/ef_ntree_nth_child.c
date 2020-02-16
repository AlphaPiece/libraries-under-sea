/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_nth_child.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:14:22 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 22:16:45 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

t_ntree	*ef_ntree_nth_child(t_ntree *parent, int n)
{
	t_ntree	*child;

	if (!parent)
		return (NULL);
	for (child = parent->children; child && n-- > 0; child = child->next)
		;
	return (child);
}
