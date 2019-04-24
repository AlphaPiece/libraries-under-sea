/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_find.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 22:01:20 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/23 22:03:28 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_find(t_slist *list, void *data)
{
	t_slist	*node;

	for (node = list; node; node = node->next)
		if (node->data == data)
			return (node);
	return (NULL);
}
