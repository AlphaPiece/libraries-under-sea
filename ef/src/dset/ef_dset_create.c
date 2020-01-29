/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dset_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 07:46:35 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/01/29 09:08:28 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dset	*ef_dset_create(void *key, void *value, t_deque *record)
{
	t_dset	*set;

	set = ef_dset_alloc();
	ef_deque_push_tail(record, set);
	set->key = key;
	set->value = value;
	set->parent = set;
	set->rank = 0;
	return (set);
}
