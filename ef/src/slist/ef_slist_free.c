/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 22:53:22 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/01/11 22:33:24 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_slist_free(t_slist *list, f_del del, t_flag one_or_all)
{
	t_slist	*next;

	while (list)
	{
		next = list->next;
		if (del)
			del(list->data);
		free(list);
		if (one_or_all == ONE)
			break ;
		list = next;
	}
}
