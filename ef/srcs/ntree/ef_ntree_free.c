/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 10:39:20 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 11:34:31 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_ntree_free(t_ntree *tree, f_del del, t_flag one_or_all)
{
	t_ntree	*subtree;
	t_ntree	*next;

	if (tree)
	{
		if (one_or_all == ONE)
		{
			if (del)
				del(tree->data);
			free(tree);
		}
		else
		{
			subtree = tree->children;
			while (subtree)
			{
				next = subtree->next;
				ef_ntree_free(subtree, del, one_or_all);
				subtree = next;
			}
			if (del)
				del(tree->data);
			free(tree);
		}
	}
}
