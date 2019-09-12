/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sknode_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 12:09:04 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 12:11:43 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_sknode	*ef_sknode_create(void *key, void *value)
{
	t_sknode	*node;

	node = ef_sknode_alloc();
	node->key = key;
	node->value = value;
	node->forward = ef_darray_create(sizeof(t_sknode *), 0);
	return (node);
}
