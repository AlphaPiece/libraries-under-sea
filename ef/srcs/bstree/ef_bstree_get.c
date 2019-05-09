/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 22:47:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 22:51:58 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_bstree_get(t_bstree *tree, void *key)
{
	t_rbtree	*node;
	void		*value;

	if (!tree)
		return (NULL);
	value = NULL;
	if ((node = ef_bstree_find(tree, key)))
		value = node->value;
	return (value);
}
