/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 14:10:15 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 14:22:56 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

static t_ntree	*ntree_copy(t_ntree *parent, t_ntree *tree)
{
	t_ntree	*new_tree;

	if (!tree)
		return (NULL);
	new_tree = ef_ntree_alloc();
	new_tree->data = tree->data;
	

t_ntree		*ef_ntree_copy(t_ntree *tree)
{

