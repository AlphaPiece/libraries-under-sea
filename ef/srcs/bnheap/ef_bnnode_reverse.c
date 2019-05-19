/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnnode_reverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/18 22:10:43 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/18 22:12:32 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_bnnode	*ef_bnnode_reverse(t_bnnode *node)
{
	t_bnnode	*prev;
	t_bnnode	*next;

	prev = NULL;
	while (node)
	{
		next = node->sibling;
		node->sibling = prev;
		prev = node;
		node = next;
	}
	return (prev);
}
