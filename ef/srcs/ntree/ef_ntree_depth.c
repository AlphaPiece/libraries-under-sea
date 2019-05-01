/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_depth.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 10:39:59 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 09:08:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_ntree_depth(t_ntree *tree)
{
	if (!tree)
		return (0);
	else if (!tree->parent)
		return (1);
	else
		return (1 + ef_ntree_depth(tree->parent));
}
