/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_next_sibling.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:23:50 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 10:33:13 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

t_ntree	*ef_ntree_next_sibling(t_ntree *tree)
{
	return ((tree) ? tree->next : NULL);
}
