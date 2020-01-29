/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dset_clear_record.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 09:10:45 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/01/29 09:17:54 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_dset_clear_record(t_deque *record, f_del del_key, f_del del_value)
{
	t_dset	*set;

	while (!ef_deque_is_empty(record))
	{
		set = ef_deque_pop_head(record);
		ef_dset_free(set, del_key, del_value);
	}
}
