/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_position.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 22:12:34 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/23 22:15:20 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_slist_position(t_slist *list, t_slist *node_link)
{
	t_slist	*node;
	int		pos;

	for (node = list, pos = 0; node; node = node->next, pos++)
		if (node == node_link)
			return (pos);
	return (-1);
}
