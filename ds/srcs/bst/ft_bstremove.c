/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 22:13:59 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/13 20:55:02 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

void	ft_bstremove(t_btree **root, void *item, int (*cmp)(void *, void *))
{
	if (!root)
		return ;
	else if (cmp((*root)->data, item) < 0)
		ft_bstremove(&(*root)->right, item, cmp);
	else if (cmp((*root)->data, item) > 0)
		ft_bstremove(&(*root)->left, item, cmp);
	else
		ft_bstremoveroot(root);
}
