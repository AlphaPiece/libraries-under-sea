/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dset_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 07:54:41 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/01 09:58:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

int	ef_dset_size(t_dset *set)
{
	t_dset	*curr;
	int		i;

	if (set)
	{
		set = ef_dset_find(set);
		for (i = 1, curr = set->next; curr != set; curr = curr->next, i++)
			;
		return (i);
	}
	return (0);
}
