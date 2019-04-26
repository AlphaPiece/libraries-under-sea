/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_node_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 22:12:34 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 10:06:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_slist_node_index(t_slist *list, t_slist *node)
{
	int	i;

	for (i = 0; list; list = list->next, i++)
		if (list == node)
			return (i);
	return (-1);
}
