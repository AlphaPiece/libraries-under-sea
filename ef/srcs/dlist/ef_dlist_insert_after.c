/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_insert_after.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 12:05:03 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 12:06:18 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_insert_after(t_dlist *list, void *data, t_dlist *node)
{
	return (ef_dlist_insert_list_after(list, ef_dlist_new(data), node));
}
