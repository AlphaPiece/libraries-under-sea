/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_spnode_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:45:01 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/21 10:46:06 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_spnode_free(t_spnode *node, f_del del_key, f_del del_value)
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
