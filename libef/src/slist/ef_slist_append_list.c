/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_append_list.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 09:33:17 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 09:36:09 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_slist.h"

t_slist	*ef_slist_append_list(t_slist *list1, t_slist *list2)
{
	if (!list1)
		return (list2);
	ef_slist_last_node(list1)->next = list2;
	return (list1);
}
