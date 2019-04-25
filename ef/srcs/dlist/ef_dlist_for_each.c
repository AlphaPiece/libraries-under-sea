/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_for_each.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 20:08:02 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 22:13:05 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_dlist_for_each(t_dlist *list, f_mfy mfy)
{
	for ( ; list; list = list->next)
		list->data = mfy(list->data);
}
