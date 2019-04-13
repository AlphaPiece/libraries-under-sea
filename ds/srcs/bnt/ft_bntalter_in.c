/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bntalter_in.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 19:14:40 by zwang             #+#    #+#             */
/*   Updated: 2019/04/12 11:14:04 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

/*
** in-order traversal; parse data of each node to f and assgin f value back
*/

void	ft_bntalter_in(t_btree *node, void *(*f)(void *))
{
	if (node)
	{
		ft_bntalter_in(node->left, f);
		node->data = f(node->data);
		ft_bntalter_in(node->right, f);
	}
}
