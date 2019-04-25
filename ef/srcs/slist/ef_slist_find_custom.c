/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_find_custom.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 22:06:55 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 21:20:47 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_find_custom(t_slist *list, void *data,
								int (*cmp)(void *, void *))
{
	for ( ; list; list = list->next)
		if (cmp(list->data, data) == 0)
			return (list);
	return (NULL);
}
