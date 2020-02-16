/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_atree_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/14 22:52:35 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/14 23:14:32 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_atree.h"

void	ef_atree_remove(t_atree *tree, void *key)
{
	if (tree)
		ef_atree_delete(tree, ef_atree_find(tree, key));
}
