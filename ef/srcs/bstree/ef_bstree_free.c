/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 22:40:07 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 22:53:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

static void	_free(t_bstree *tree, f_del del_key, f_del del_value)
{
	if (del_key)
		del_key(tree->key);
	if (del_value)
		del_value(tree->value);
	free(tree);
}

void		ef_bstree_free(t_bstree *tree, f_del del_key, f_del del_value,
						t_flag one_or_all)
{
	if (tree)
	{
		if (one_or_all == ONE)
			_free(tree, del_key, del_value);
		else
		{
			ef_bstree_free(tree->left, del_key, del_value, one_or_all);
			ef_bstree_free(tree->right, del_key, del_value, one_or_all);
			_free(tree, del_key, del_value);
		}
	}
}
