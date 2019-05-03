/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_unlink.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 22:36:06 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 09:52:32 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bstree_unlink(t_bstree *tree)
{
	if (!tree || ef_bstree_is_root(tree))
		return ;
	if (tree == tree->parent->left)
	{
		tree->parent->left = NULL;
		tree->parent = NULL;
	}
	else
	{
		tree->parent->right = NULL;
		tree->parent = NULL;
	}
}
