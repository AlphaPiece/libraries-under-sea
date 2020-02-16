/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_append.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 16:00:13 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 10:47:53 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_slist.h"

t_slist	*ef_slist_append(t_slist *list, void *data)
{
	return (ef_slist_append_list(list, ef_slist_create(data)));
}
