/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 22:01:20 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 19:00:27 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_find(t_slist *list, void *data, f_cmp cmp)
{
	if (cmp)
	{
		for ( ; list; list = list->next)
			if (list->data == data)
				return (list);
	}
	else
	{
		for ( ; list; list = list->next)
			if (list->data == data)
				return (list);
	}
	return (NULL);
}
