/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bntalter_post.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 19:19:53 by zwang             #+#    #+#             */
/*   Updated: 2019/04/12 11:14:17 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

/*
** post-order traversal; parse data of each node to f and assign f value back
*/

void	ft_bntalter_post(t_btree *node, void *(*f)(void *))
{
	if (node)
	{
		ft_bntalter_post(node->left, f);
		ft_bntalter_post(node->right, f);
		node->data = f(node->data);
	}
}
