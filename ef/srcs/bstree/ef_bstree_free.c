/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 17:35:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 23:05:57 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_bstree_free(t_bstree *tree)
{
	if (tree)
	{
		ef_bstree_clear(tree);
		ef_rbtree_free(tree->nil, NULL, NULL);
		free(tree);
	}
}
