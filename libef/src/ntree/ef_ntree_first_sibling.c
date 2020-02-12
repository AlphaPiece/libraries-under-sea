/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_first_sibling.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:17:49 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 12:08:13 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_ntree	*ef_ntree_first_sibling(t_ntree *tree)
{
	if (!tree)
		return (NULL);
	while (tree->prev)
		tree = tree->prev;
	return (tree);
}
