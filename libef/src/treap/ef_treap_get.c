/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_treap_get.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 20:31:19 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/23 20:32:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_treap.h"

void	*ef_treap_get(t_treap *tree, void *key)
{
	t_trnode	*node;

	if ((node = ef_treap_find(tree, key)))
		return (node->value);
	return (NULL);
}
