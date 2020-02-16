/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_anode_height.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 21:14:51 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/13 21:03:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_atree.h"

int	ef_anode_height(t_anode *node)
{
	if (!node)
		return (-1);
	return (node->height);
}
