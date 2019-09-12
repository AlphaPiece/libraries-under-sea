/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_finode_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:25:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/06/05 12:26:40 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_finode_free(t_finode *node, f_del del_key, f_del del_value)
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
