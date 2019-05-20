/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_23tree_find.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 19:15:43 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 19:22:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_ntree	*ef_23tree_find(t_23tree *tree, void *key)
{
	t_ntree	*node;

	if (tree)
	{
		node = tree->root;
		while (node)
		{
			switch (ef_ntree_count_children(node))
			{
				case 0:
					
