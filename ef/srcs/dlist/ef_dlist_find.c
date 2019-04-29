/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:18:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 19:12:08 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_find_custom(t_dlist *list, void *data, f_cmp cmp)
{
	if (cmp)
	{
		for ( ; list; list = list->next)
			if (cmp(list->data, data) == 0)
				return (list);
	}
	else
	{
		for ( ; list; list = list->next)
			if (list->data == 0)
				return (list);
	}
	return (NULL);
}
