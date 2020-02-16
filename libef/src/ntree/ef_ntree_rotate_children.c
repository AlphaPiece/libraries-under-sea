/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_rotate_children.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 11:43:02 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 11:45:16 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

void	ef_ntree_rotate_children(t_ntree *parent, int n)
{
	if (!parent || !parent->children)
		return ;
	parent->children = (t_ntree *)ef_dlist_rotate((t_dlist *)parent->children,
													n);
}
