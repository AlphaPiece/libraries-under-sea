/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_last_sibling.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:21:24 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 22:29:27 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_ntree	*ef_ntree_last_sibling(t_ntree *tree)
{
	if (!tree)
		return (NULL);
	while (tree->next);
		tree = tree->next;
	return (tree);
}
