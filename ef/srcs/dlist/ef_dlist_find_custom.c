/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_find_custom.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:18:18 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 21:21:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_find_custom(t_dlist *list, void *data,
								int (*cmp)(void *, void *))
{
	for ( ; list; list = list->next)
		if (cmp(list->data, data) == 0)
			return (list);
	return (NULL);
}
