/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 22:47:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/14 23:05:49 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_rbtree.h"

void	*ef_rbtree_get(t_rbtree *tree, void *key)
{
	t_rbnode	*node;

	if (tree && (node = ef_rbtree_find(tree, key)) != tree->nil)
		return (node->value);
	return (NULL);
}
