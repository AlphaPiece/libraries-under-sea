/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_23tree_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 19:06:59 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 19:09:01 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_23tree	*ef_23tree_create(f_cmp cmp_key, f_del del_key, f_del del_value)
{
	t_23tree	*tree;

	if (!cmp_key)
		return (NULL);
	tree = ef_23tree_alloc();
	tree->root = NULL;
	tree->cmp_key = cmp_key;
	tree->del_key = del_key;
	tree->del_value = del_value;
	tree->size = 0;
	return (tree);
}
