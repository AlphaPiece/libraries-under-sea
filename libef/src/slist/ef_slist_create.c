/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 09:36:34 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 10:47:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_create(void *data)
{
	t_slist	*node;

	node = ef_slist_alloc();
	node->data = data;
	node->next = NULL;
	return (node);
}
