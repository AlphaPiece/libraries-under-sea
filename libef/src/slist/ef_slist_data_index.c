/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_data_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 22:19:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 10:05:38 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_slist.h"

int	ef_slist_data_index(t_slist *list, void *data)
{
	int	i;

	for (i = 0; list; list = list->next, i++)
		if (list->data == data)
			return (i);
	return (-1);
}
