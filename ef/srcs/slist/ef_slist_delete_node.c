/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_delete_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 22:04:08 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 10:17:58 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_delete_node(t_slist *list, t_slist *node)
{
	list = ef_slist_remove_node(list, node);
	ef_slist_free_node(node);
	return (list);
}
