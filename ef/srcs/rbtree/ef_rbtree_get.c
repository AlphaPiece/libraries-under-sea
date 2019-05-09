/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 22:47:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 15:12:40 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_rbtree_get(t_rbtree *tree, void *key)
{
	t_rbnode	*node;
	void		*value;

	if (!tree)
		return (NULL);
	value = NULL;
	if ((node = ef_rbtree_find(tree, key)))
		value = node->value;
	return (value);
}
