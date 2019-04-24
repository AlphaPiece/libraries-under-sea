/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_copy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 11:44:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/23 21:10:09 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_copy(t_slist *list)
{
	t_slist	*node;
	
	if (!list)
		return (NULL);
	node = ef_slist_alloc();
	node->data = list->data;
	node->next = ef_slist_copy(list->next);
	return (node);
}
