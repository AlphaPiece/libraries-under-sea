/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 16:15:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 17:16:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_bstree	*ef_bstree_new(f_cmp cmp_key, f_cpy cpy_key, f_cpy cpy_value,
							f_del del_key, f_del del_value)
{
	t_bstree	*tree;

	if (!cmp_key)
		return (NULL);
	tree = ef_bstree_alloc();
	tree->root = NULL;
	tree->size = 0;
	tree->cmp_key = cmp_key;
	tree->cpy_key = cpy_key;
	tree->cpy_value = cpy_value;
	tree->del_key = del_key;
	tree->del_value = del_value;
	return (tree);
}
