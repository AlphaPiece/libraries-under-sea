/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:19:23 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/21 10:44:26 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_sptree	*ef_sptree_create(f_cmp cmp_key, f_del del_key, f_del del_value)
{
	t_sptree	*tree;

	if (!cmp_key)
		return (NULL);
	tree = ef_sptree_alloc();
	tree->root = NULL;
	tree->cmp_key = cmp_key;
	tree->del_key = del_key;
	tree->del_value = del_value;
	return (tree);
}
