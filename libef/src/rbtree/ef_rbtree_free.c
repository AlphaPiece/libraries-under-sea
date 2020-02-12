/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 17:35:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 15:39:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_rbtree_free(t_rbtree *tree)
{
	if (tree)
	{
		ef_rbtree_clear(tree);
		ef_rbnode_free(tree->nil, NULL, NULL);
		free(tree);
	}
}
