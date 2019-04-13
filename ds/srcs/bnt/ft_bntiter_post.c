/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bntiter_post.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/26 12:07:54 by zwang             #+#    #+#             */
/*   Updated: 2019/04/12 11:15:02 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

/*
** post-order traversal; parse data of each node to f
*/

void	ft_bntiter_post(t_btree *node, void (*f)(void *))
{
	if (node)
	{
		ft_bntiter_post(node->left, f);
		ft_bntiter_post(node->right, f);
		f(node->data);
	}
}
