/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_traverse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 21:35:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/29 20:08:56 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_slist_traverse(t_slist *list, f_mfy mfy)
{
	t_slist	*node;
	
	if (mfy)
		for (node = list; node; node = node->next)
			node->data = mfy(node->data);
}
