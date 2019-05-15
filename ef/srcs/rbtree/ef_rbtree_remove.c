/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_remove.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 20:33:21 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/14 23:02:43 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_rbtree_remove(t_rbtree *tree, void *key)
{
	if (tree)
		ef_rbtree_delete(tree, ef_rbtree_find(tree, key));
}
