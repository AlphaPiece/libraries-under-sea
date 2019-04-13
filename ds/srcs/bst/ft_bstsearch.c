/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstsearch.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/06 20:12:07 by zwang             #+#    #+#             */
/*   Updated: 2019/04/12 11:16:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

void	*ft_bstsearch(t_btree *bst, void *data_ref, int (*cmp)(void *, void *))
{
	int	flag;

	if (!bst)
		return (NULL);
	else if ((flag = cmp(data_ref, bst->data)) == 0)
		return (bst->data);
	else if (flag < 0)
		return (ft_bstsearch(bst->left, data_ref, cmp));
	return (ft_bstsearch(bst->right, data_ref, cmp));
}
