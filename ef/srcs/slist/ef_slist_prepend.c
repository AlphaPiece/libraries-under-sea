/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_prepend.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:23:25 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 10:48:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_prepend(t_slist *list, void *data)
{
	return (ef_slist_prepend_list(list, ef_slist_create(data)));
}
