/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstdelroot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 08:52:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/03/16 09:38:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bstdelroot(t_btree **root)
{
	t_btree *node;

	if (!(*root)->left && !(*root)->right)
		ft_bntdel(root);
	else if (!(*root)->left)
	{
		node = *root;
		(*root) = (*root)->right;
		ft_bntdel(&node);
	}
	else if (!(*root)->right)
	{
		node = *root;
		(*root) = (*root)->left;
		ft_bntdel(&node);
	}
	else
		(*root)->data = ft_bstpopmax(&(*root)->left);
}
