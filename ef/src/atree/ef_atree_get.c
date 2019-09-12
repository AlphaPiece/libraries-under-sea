/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_atree_get.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 22:34:23 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/14 22:38:16 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_atree_get(t_atree *tree, void *key)
{
	t_anode	*node;

	if (tree && (node = ef_atree_find(tree, key)))
		return (node->value);
	return (NULL);
}
