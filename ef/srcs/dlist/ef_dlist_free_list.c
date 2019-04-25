/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_free_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 17:35:35 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 17:36:55 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_dlist_free_list(t_dlist *list)
{
	t_dlist	*next;

	while (list)
	{
		next = list->next;
		ef_dlist_free_node(list);
		list = next;
	}
}
