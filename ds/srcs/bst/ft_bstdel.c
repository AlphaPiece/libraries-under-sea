/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 22:13:59 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/12 11:16:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

void	ft_bstdel(t_btree **root, void *item, int (*cmp)(void *, void *))
{
	if (!root)
		return ;
	else if (cmp((*root)->data, item) < 0)
		ft_bstdel(&(*root)->right, item, cmp);
	else if (cmp((*root)->data, item) > 0)
		ft_bstdel(&(*root)->left, item, cmp);
	else
		ft_bstdelroot(root);
}
