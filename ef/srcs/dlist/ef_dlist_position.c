/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_position.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:22:08 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 21:38:58 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_dlist_position(t_dlist *list, t_dlist *node_link)
{
	t_dlist	*node;
	int		pos;

	for (node = list, pos = 0; node; node = node->next, pos++)
		if (node == node_link)
			return (pos);
	return (-1);
}
