/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isbst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 10:06:31 by zwang             #+#    #+#             */
/*   Updated: 2019/04/13 19:45:49 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

t_bool	isbst(t_btree *root, int (*cmp)(void *, void *),
				void *maxval, void *minval);
{
	if (!root)
		return (true);
	else if ((maxval && cmp(root->val, maxval) > 0) ||
				(minval && cmp(root->val, minval) < 0)
		return (false);
	else
		return (isbst(root->left, cmp, root->val, minval) &&
				isbst(root->right, cmp, maxval, root->val));
}

t_bool	ft_isbst(t_btree *root, int (*cmp)(void *, void *))
{
	if (!cmp)
		return (false);
	return (isbst(root, cmp, NULL, NULL));
}
