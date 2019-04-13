/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 23:18:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/12 11:21:04 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

void	ft_rbtinsert(t_rbtree **root, void *data, int (*cmp)(void *, void *))
{
	if (!*root)
	{
		if (*root = (t_rbtree *)malloc(sizeof(t_rbtree)))
		{
			(*root)->data = data;
			(*root)->parent = NULL;
			(*root)->left = NULL;
			(*root)->right = NULL;
			(*root)->color = RE_BLACK;
		}
	}
	else
	{
	}
}
