/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_trnode_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:48:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/23 20:50:08 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_trnode_free(t_trnode *node, f_del del_key, f_del del_value)
{
	if (node)
	{
		if (del_key)
			del_key(node->key);
		if (del_value)
			del_value(node->value);
		free(node);
	}
}
