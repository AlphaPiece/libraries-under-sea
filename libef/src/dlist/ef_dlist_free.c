/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:37:13 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 09:55:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_dlist.h"

void	ef_dlist_free(t_dlist *list, f_del del, t_flag one_or_all)
{
	t_dlist	*next;

	while (list)
	{
		next = list->next;
		if (del)
			del(list->data);
		free(list);
		list = next;
		if (one_or_all == ONE)
			break ;
	}
}
