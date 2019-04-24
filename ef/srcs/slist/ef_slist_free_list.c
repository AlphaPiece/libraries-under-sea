/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_free_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 22:33:17 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/22 22:48:02 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_slist_free_list(t_slist *list)
{
	t_slist	*next;

	while (list)
	{
		next = list->next;
		ef_slist_free_node(list);
		list = next;
	}
}
