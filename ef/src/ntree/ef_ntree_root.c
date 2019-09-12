/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_root.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 20:11:11 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 20:12:39 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_ntree	*ef_ntree_root(t_ntree *tree)
{
	if (!tree)
		return (NULL);
	while (tree->parent)
		tree = tree->parent;
	return (tree);
}
