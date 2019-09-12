/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sgtree_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:36:38 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/29 10:38:45 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_sgtree	*ef_sgtree_create(f_cmp cmp_key, f_del del_key, f_del del_value)
{
	t_sgtree	*tree;

	if (!cmp_key)
		return (NULL);
	tree = ef_sgtree_alloc();
	tree->root = NULL;
	tree->cmp_key = cmp_key;
	tree->del_key = del_key;
	tree->del_value = del_value;
	tree->size = 0;
	return (tree);
}
