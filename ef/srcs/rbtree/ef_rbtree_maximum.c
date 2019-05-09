/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_maximum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:56:24 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 15:14:46 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbnode	*ef_rbtree_maximum(t_rbtree *tree, t_rbnode *x)
{
	if (!tree || !x)
		return (NULL);
	if (x == tree->nil)
		return (tree->nil);
	while (x->right != tree->nil)
		x = x->right;
	return (x);
}
