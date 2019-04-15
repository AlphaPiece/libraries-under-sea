/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gtnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 13:34:46 by zwang             #+#    #+#             */
/*   Updated: 2019/04/13 21:17:51 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

t_tree	*ft_gtnew(void *data)
{
	t_tree		*node;

	if (!(node = (t_tree *)malloc(sizeof(t_tree))))
		return (NULL);
	node->data = data;
	node->parent = NULL;
	node->children = NULL;
	node->child_nbr = 0;
	return (node);
}
