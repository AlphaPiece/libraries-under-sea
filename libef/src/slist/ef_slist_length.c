/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 22:58:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 17:47:11 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_slist.h"

int	ef_slist_length(t_slist *list)
{
	int	len;

	len = 0;
	while (list)
	{
		len++;
		list = list->next;
	}
	return (len);
}
