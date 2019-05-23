/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_trnode_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:09:20 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/22 10:13:56 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_trnode	*ef_trnode_create(void *key, void *value)
{
	t_trnode	*node;

	node = ef_trnode_alloc();
	node->key = key;
	node->value = value;
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;
	node->priority = ft_randint(INT_MIN + 1, INT_MAX);
	return (node);
}
