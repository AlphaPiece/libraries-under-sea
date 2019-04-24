/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_nth_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 16:58:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/23 22:33:17 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_slist_nth_data(t_slist *list, int n)
{
	t_slist	*node;

	node = ef_slist_nth_node(list, n);
	if (!node)
		return (NULL);
	return (node->data);
}
