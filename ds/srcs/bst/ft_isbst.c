/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isbst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 10:06:31 by zwang             #+#    #+#             */
/*   Updated: 2019/04/13 20:40:51 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

static t_bool	isbst(t_btree *root, int (*cmp)(void *, void *),
				void *maxdata, void *mindata)
{
	if (!root)
		return (true);
	else if ((maxdata && cmp(root->data, maxdata) > 0) ||
				(mindata && cmp(root->data, mindata) < 0))
		return (false);
	else
		return (isbst(root->left, cmp, root->data, mindata) &&
				isbst(root->right, cmp, maxdata, root->data));
}

t_bool			ft_isbst(t_btree *root, int (*cmp)(void *, void *))
{
	if (!cmp)
		return (false);
	return (isbst(root, cmp, NULL, NULL));
}
