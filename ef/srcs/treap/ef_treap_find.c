/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_treap_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:28:05 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/23 20:30:29 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_trnode	*ef_treap_find(t_treap *tree, void *key)
{
	t_trnode	*node;
	int			flag;

	if (!tree)
		return (NULL);
	node = tree->root;
	while (node)
		if ((flag = tree->cmp_key(key, node->key)) < 0)
			node = node->left;
		else if (flag > 0)
			node = node->right;
		else
			break ;
	return (node);
}
