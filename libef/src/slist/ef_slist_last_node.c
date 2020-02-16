/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_last_node.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 21:47:51 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/23 22:32:44 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_slist.h"

t_slist	*ef_slist_last_node(t_slist *list)
{
	t_slist	*node;

	if (!list)
		return (NULL);
	for (node = list; node->next; node = node->next)
		;
	return (node);
}
