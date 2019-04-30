/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_traverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 20:08:02 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 21:20:57 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_dlist_traverse(t_dlist *list, f_trv trv)
{
	if (trv)
		for ( ; list; list = list->next)
			list->data = trv(list->data);
}
