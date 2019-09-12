/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_spnode_minimum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:18:34 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/21 09:20:36 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_spnode	 *ef_spnode_minimum(t_spnode *node)
{
	if (!node)
		return (NULL);
	while (node->left)
		node = node->left;
	return (node);
}
