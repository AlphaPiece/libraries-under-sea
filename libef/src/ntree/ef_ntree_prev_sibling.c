/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_prev_sibling.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 22:25:37 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 10:32:44 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

t_ntree	*ef_ntree_prev_sibling(t_ntree *tree)
{
	return ((tree) ? tree->prev : NULL);
}
