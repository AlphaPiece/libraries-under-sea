/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 10:39:07 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 10:50:18 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_insert(t_dlist *list, void *data, int index)
{
	return (ef_dlist_insert_list(list, ef_dlist_create(data), index));
}
