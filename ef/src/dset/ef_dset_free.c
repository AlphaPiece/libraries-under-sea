/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dset_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 08:01:20 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/01/29 09:10:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

void	ef_dset_free(t_dset *set, f_del del_key, f_del del_value)
{
	if (set)
	{
		if (del_key)
			del_key(set->key);
		if (del_value)
			del_value(set->value);
		free(set);
	}
}
