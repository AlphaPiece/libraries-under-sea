/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_spnode_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:17:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 10:18:20 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_sptree.h"

t_spnode	*ef_spnode_create(void *key, void *value)
{
	t_spnode	*node;

	node = ef_spnode_alloc();
	node->key = key;
	node->value = value;
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
