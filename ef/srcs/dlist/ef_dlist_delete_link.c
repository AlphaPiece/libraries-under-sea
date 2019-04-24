/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_delete_link.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 15:58:31 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 17:08:05 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_delete_link(t_dlist *list, t_dlist *node_link)
{
	list = ef_dlist_remove_link(list, node_link);
	ef_dlist_free_node(node_link);
	return (list);
}
