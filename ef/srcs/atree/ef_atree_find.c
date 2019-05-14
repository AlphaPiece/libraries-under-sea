/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_atree_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:08:24 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/13 22:51:12 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_anode	*ef_atree_find(t_atree *tree, void *key)
{
	t_anode	*node;
	int		flag;

	if (!tree)
		return (NULL);
	node = tree->root;
	while (node)
	{
		if ((flag = tree->cmp_key(key, node->key)) < 0)
			node = node->left;
		else if (flag > 0)
			node = node->right;
		else
			break ;
	}
	return (node);
}
