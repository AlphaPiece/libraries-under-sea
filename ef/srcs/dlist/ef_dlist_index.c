/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:24:33 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 21:25:42 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_dlist_index(t_dlist *list, void *data)
{
	int	i;

	for (i = 0; list; list = list->next, i++)
		if (list->data == data)
			return (i);
	return (-1);
}
