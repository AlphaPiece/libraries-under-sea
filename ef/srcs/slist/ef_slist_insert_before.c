/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_insert_before.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 13:05:40 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 10:49:12 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_insert_before(t_slist *list, void *data, t_slist *node)
{
	return (ef_slist_insert_list_before(list, ef_slist_create(data), node));
}
