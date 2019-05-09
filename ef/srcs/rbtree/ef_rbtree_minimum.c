/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_minimum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:53:34 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 15:15:12 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbnode	*ef_rbtree_minimum(t_rbtree *tree, t_rbnode *x)
{
	if (!tree || !x)
		return (NULL);
	if (x == tree->nil)
		return (tree->nil);
	while (x->left != tree->nil)
		x = x->left;
	return (x);
}
