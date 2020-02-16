/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_is_descendant.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 11:35:52 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 11:36:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

t_bool	ef_ntree_is_descendant(t_ntree *node, t_ntree *ancestor)
{
	return (ef_ntree_is_ancestor(ancestor, node));
}
