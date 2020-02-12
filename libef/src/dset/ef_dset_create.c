/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dset_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 07:46:35 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/01 07:56:47 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dset	*ef_dset_create(void *data)
{
	t_dset	*set;

	set = ef_dset_alloc();
	set->data = data;
	set->parent = set;
	set->next = set;
	set->rank = 0;
	return (set);
}
