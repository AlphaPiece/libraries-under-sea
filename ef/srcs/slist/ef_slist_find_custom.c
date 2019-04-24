/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_find_custom.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 22:06:55 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/23 22:09:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_find_custom(t_slist *list, void *data,
								int (*cmp)(void *, void *))
{
	t_slist	*node;

	for (node = list; node; node = node->next)
		if (cmp(node->data, data) == 0)
			return (node);
	return (NULL);
}
