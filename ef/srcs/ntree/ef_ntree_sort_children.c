/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_sort_children.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 11:36:40 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 11:42:12 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_ntree_sort_children(t_ntree *parent, f_cmp cmp)
{
	if (!parent || !parent->children || !cmp)
		return ;
	parent->children = (t_ntree *)ef_dlist_sort((t_dlist *)parent->children,
												cmp);
}
