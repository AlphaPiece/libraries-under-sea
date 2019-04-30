/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_traverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 21:35:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/30 07:23:42 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_slist_traverse(t_slist *list, f_trv trv, int length)
{
	if (trv)
		for ( ; list && length-- > 0; list = list->next)
			list->data = trv(list->data);
}
