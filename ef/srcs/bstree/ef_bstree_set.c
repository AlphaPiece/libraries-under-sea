/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_set.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 20:17:50 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 20:19:44 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bstree_set(t_bstree *tree, void *key, void *value)
{
	t_rbtree	*z;

	if ((z = ef_bstree_find(tree, key)))
		z->value = value;
	else
	{
		z = ef_rbtree_new(key, value, tree->nil);
		ef_bstree_insert(tree, z);
	}
}

