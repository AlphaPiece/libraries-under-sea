/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_reverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 21:13:41 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/23 21:21:59 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

static t_slist	*reverse(t_slist *prev, t_slist *curr)
{
	t_slist	*next;

	if (!curr)
		return (prev);
	next = curr->next;
	curr->next = prev;
	return (reverse(curr, next));
}

t_slist			*ef_slist_reverse(t_slist *list)
{
	return (reverse(NULL, list));
}
	
