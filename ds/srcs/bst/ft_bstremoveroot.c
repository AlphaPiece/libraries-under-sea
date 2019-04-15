/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstremoveroot.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 08:52:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/13 21:08:13 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

void	ft_bstremoveroot(t_btree **root)
{
	t_btree *node;

	if (!(*root)->left && !(*root)->right)
		ft_memfree(root);;
	else if (!(*root)->left)
	{
		node = *root;
		(*root) = (*root)->right;
		ft_memfree(root);
	}
	else if (!(*root)->right)
	{
		node = *root;
		(*root) = (*root)->left;
		ft_memfree(root);
	}
	else
		(*root)->data = ft_bstpopmax(&(*root)->left);
}
