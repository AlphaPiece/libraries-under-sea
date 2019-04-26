/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_new.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 09:36:34 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 09:38:09 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_new(void *data)
{
	t_slist	*node;

	node = ef_slist_alloc();
	node->data = data;
	node->next = NULL;
	return (node);
}
