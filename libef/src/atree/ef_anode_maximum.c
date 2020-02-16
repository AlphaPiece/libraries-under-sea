/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_anode_maximum.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 12:50:23 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/13 22:50:41 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_atree.h"

t_anode	*ef_anode_maximum(t_anode *node)
{
	if (!node)
		return (NULL);
	while (node->right)
		node = node->right;
	return (node);
}
