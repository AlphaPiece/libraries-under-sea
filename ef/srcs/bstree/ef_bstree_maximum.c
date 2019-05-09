/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_maximum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:56:24 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 20:15:38 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbtree	*ef_bstree_maximum(t_bstree *tree, t_rbtree *x)
{
	if (!tree || !x)
		return (NULL);
	if (x == tree->nil)
		return (tree->nil);
	while (x->right != tree->nil)
		x = x->right;
	return (x);
}
