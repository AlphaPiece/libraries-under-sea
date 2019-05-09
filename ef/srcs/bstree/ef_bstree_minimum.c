/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_minimum.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 13:53:34 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/08 20:13:58 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbtree	*ef_bstree_minimum(t_bstree *tree, t_rbtree *x)
{
	if (!tree || !x)
		return (NULL);
	if (x == tree->nil)
		return (tree->nil);
	while (x->left != tree->nil)
		x = x->left;
	return (x);
}
