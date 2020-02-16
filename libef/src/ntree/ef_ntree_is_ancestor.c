/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_is_ancestor.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:31:46 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 11:35:44 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

t_bool	ef_ntree_is_ancestor(t_ntree *node, t_ntree *descendant)
{
	if (node && descendant)
		for ( ; descendant->parent; descendant = descendant->parent)
			if (descendant->parent == node)
				return (true);
	return (false);
}
