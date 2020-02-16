/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_treap_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:19:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/24 09:21:30 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_treap.h"

void	ef_treap_set(t_treap *tree, void *key, void *value)
{
	t_trnode	*node;

	if (tree)
	{
		if ((node = ef_treap_find(tree, key)))
		{
			if (tree->del_value)
				tree->del_value(node->value);
			node->value = value;
		}
		else
			ef_treap_insert(tree, ef_trnode_create(key, value));
	}
}
