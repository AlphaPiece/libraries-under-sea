/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_join.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:13:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/21 09:45:12 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_sptree.h"

t_sptree	*ef_sptree_join(t_sptree *tree1, t_sptree *tree2)
{
	ef_sptree_splay(tree1, ef_spnode_maximum(tree1->root));
	tree1->root->right = tree2->root;
	tree2->root->parent = tree1->root;
	free(tree2);
	return (tree1);
}
