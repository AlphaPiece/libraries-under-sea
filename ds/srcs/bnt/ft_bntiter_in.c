/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bntiter_in.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 11:23:32 by zwang             #+#    #+#             */
/*   Updated: 2019/04/12 11:14:53 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

/*
** in-order traversal; parse data of each node to f
*/

void	ft_bntiter_in(t_btree *node, void (*f)(void *))
{
	if (node)
	{
		ft_bntiter_in(node->left, f);
		f(node->data);
		ft_bntiter_in(node->right, f);
	}
}
