/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_spnode_maximum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:20:43 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/21 09:21:28 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_spnode	*ef_spnode_maximum(t_spnode *node)
{
	if (!node)
		return (NULL);
	while (node->right)
		node = node->right;
	return (node);
}
