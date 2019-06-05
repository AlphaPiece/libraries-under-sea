/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sgnode_depth.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:46:28 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/29 10:50:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_sgnode_depth(t_sgnode *node)
{
	int	depth;

	if (!node)
		return (-1);
	for (depth = 0; node->parent; node = node->parent, depth++)
		;
	return (depth);
}
