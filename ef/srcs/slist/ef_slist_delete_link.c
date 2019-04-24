/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_delete_link.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 22:04:08 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/23 22:12:17 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_delete_link(t_slist *list, t_slist *node_link)
{
	list = ef_slist_remove_link(list, node_link);
	ef_slist_free_node(node_link);
	return (list);
}
