/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 22:01:20 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 07:09:06 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_slist.h"

t_slist	*ef_slist_find(t_slist *list, void *data, f_cmp cmp)
{
	for ( ; list; list = list->next)
		if (list->data == data || (cmp && cmp(list->data, data) == 0))
			return (list);
	return (NULL);
}
