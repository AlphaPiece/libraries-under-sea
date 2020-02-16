/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_anode_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 17:57:17 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/13 23:05:25 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_atree.h"

t_anode	*ef_anode_create(void *key, void *value)
{
	t_anode	*node;

	node = ef_anode_alloc();
	node->key = key;
	node->value = value;
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;
	node->height = 0;
	return (node);
}
