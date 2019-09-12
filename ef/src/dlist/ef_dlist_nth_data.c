/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_nth_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 21:13:34 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 21:14:30 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	*ef_dlist_nth_data(t_dlist *list, int n)
{
	t_dlist	*node;

	node = ef_dlist_nth_node(list, n);
	return ((node) ? node->data : NULL);
}
