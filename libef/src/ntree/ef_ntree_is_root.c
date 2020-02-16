/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_is_root.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:26:22 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 11:31:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

t_bool	ef_ntree_is_root(t_ntree *node)
{
	return (node && !node->parent && !node->prev && !node->next);
}
