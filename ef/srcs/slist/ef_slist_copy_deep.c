/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_copy_deep.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 20:36:20 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 22:39:18 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_copy_deep(t_slist *list, f_cpy cpy)
{
	t_slist	*node;

	if (!list)
		return (NULL);
	node = ef_slist_alloc();
	node->data = (cpy) ? cpy(list->data) : list->data;
	node->next = ef_slist_copy_deep(list->next, cpy);
	return (node);
}
