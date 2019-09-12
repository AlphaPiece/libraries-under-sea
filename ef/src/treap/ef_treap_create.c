/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_treap_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:45:04 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/23 18:47:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_treap	*ef_treap_create(f_cmp cmp_key, f_del del_key, f_del del_value)
{
	t_treap	*tree;

	if (!cmp_key)
		return (NULL);
	tree = ef_treap_alloc();
	tree->root = NULL;
	tree->cmp_key = cmp_key;
	tree->del_key = del_key;
	tree->del_value = del_value;
	tree->size = 0;
	return (tree);
}
