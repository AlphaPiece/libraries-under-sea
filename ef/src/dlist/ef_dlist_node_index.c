/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_node_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:22:08 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 11:35:32 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_dlist_node_index(t_dlist *list, t_dlist *node)
{
	int	i;

	for (i = 0; list; list = list->next, i++)
		if (list == node)
			return (i);
	return (-1);
}
