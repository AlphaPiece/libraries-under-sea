/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_unlink.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 10:32:02 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 10:39:11 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_ntree_unlink(t_ntree *tree)
{
	t_ntree	*parent;
	t_ntree	*prev;
	t_ntree	*next;

	if (!tree || ef_ntree_is_root(tree))
		return ;
	parent = tree->parent;
	prev = tree->prev;
	next = tree->next;
	if (parent && parent->children == tree)
		parent->children = next;
	if (prev)
		prev->next = next;
	if (next)
		next->prev = prev;
	tree->parent = NULL;
	tree->prev = NULL;
	tree->next = NULL;
}
