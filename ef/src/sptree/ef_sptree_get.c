/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_get.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:17:42 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/21 12:30:01 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_sptree_get(t_sptree *tree, void *key)
{
	t_spnode	*node;

	if ((node = ef_sptree_find(tree, key)))
		return (node->value);
	return (NULL);
}
