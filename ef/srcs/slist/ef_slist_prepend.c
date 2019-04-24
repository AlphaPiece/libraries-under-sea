/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_prepend.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:23:25 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/16 16:18:37 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_prepend(t_slist *list, void *data)
{
	t_slist	*new_node;

	new_node = ef_slist_alloc();
	new_node->data = data;
	new_node->next = list;
	return (new_node);
}