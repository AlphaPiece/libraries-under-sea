/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 10:24:32 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 10:49:47 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_dlist.h"

t_dlist	*ef_dlist_create(void *data)
{
	t_dlist	*node;

	node = ef_dlist_alloc();
	node->data = data;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
