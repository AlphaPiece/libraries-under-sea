/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_prepend_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 09:47:07 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 11:23:59 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_slist.h"

t_slist	*ef_slist_prepend_list(t_slist *list1, t_slist *list2)
{
	return (ef_slist_append_list(list2, list1));
}
