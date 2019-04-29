/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_free_all.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:37:13 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 19:49:58 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_dlist_free_all(t_dlist *list, f_del del)
{
	t_dlist	*next;

	while (list)
	{
		next = list->next;
		if (del)
			del(list->data);
		ef_dlist_free_one(list);
		list = next;
	}
}
