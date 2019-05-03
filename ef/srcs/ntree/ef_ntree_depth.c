/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_depth.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:39:59 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 22:25:08 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_ntree_depth(t_ntree *tree)
{
	if (!tree)
		return (0);
	if (ef_ntree_is_root(tree))
		return (1);
	return (1 + ef_ntree_depth(tree->parent));
}
