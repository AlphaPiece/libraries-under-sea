/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnnode_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 19:20:52 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 19:22:42 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_bnheap.h"

void	ef_bnnode_free(t_bnnode *node, f_del del_key, f_del del_value)
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
