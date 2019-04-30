/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_traverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 20:08:02 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 07:21:54 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_dlist_traverse(t_dlist *list, f_trv trv, int length, t_flag order)
{
	if (trv)
	{
		if (order == FORWARD)
			for ( ; list && length-- > 0; list = list->next)
				list->data = trv(list->data);
		else
			for (list = ef_dlist_last_node(list); list && length-- > 0;
					list = list->prev)
				list->data = trv(list->data);
	}
}
