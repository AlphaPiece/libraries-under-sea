/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 17:47:26 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 17:49:12 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bstree_clear(t_bstree *tree)
{
	if (tree)
	{
		ef_rbtree_free(tree->root, tree->del_key, tree->del_value, ALL);
		tree->size = 0;
	}
}
