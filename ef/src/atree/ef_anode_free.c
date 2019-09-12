/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_anode_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 11:57:38 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/13 11:59:15 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_anode_free(t_anode *node, f_del del_key, f_del del_value)
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
