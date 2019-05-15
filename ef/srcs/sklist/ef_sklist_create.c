/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sklist_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 12:12:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 14:37:56 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_sklist	*ef_sklist_create(f_cmp cmp_key, f_del del_key, f_del del_value)
{
	t_sklist	*list;

	if (!cmp_key)
		return (NULL);
	list = ef_sklist_create();
	list->head = ef_sknode_create(NULL, NULL);
	list->size = 0;
	list->level = 0;
	list->cmp_key = cmp_key;
	list->del_key = del_key;
	list->del_value = del_value;
	return (list);
}
