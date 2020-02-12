/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_anode_minimum.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 12:49:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/13 22:50:25 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_anode	*ef_anode_minimum(t_anode *node)
{
	if (!node)
		return (NULL);
	while (node->left)
		node = node->left;
	return (node);
}
