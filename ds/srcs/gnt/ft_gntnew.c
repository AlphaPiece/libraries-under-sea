/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_gntnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 13:34:46 by zwang             #+#    #+#             */
/*   Updated: 2019/04/12 11:18:04 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

t_tree	*ft_gntnew(void *data)
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
