/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 22:58:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/23 11:43:19 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_slist_length(t_slist *list)
{
	if (list && list->next && list->next->next && list->next->next->next &&
			list->next->next->next->next)
		return (5 + ef_slist_length(list->next->next->next->next->next));
	else if (list)
		return (1 + ef_slist_length(list->next));
	else
		return (0);
}
