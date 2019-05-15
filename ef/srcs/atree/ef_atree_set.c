/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_atree_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 22:27:37 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/14 22:33:47 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_atree_set(t_atree *tree, void *key, void *value)
{
	t_anode	*node;

	if (!tree)
		return ;
	if ((node = ef_atree_find(tree, key)))
	{
		if (tree->del_value)
			del_value(node->value);
		node->value = value;
	}
	else
		ef_atree_insert(tree, ef_anode_create(key, value));
}
