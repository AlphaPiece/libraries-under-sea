/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dset_traverse.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 07:46:32 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/01 08:22:53 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_dset.h"

void	ef_dset_traverse(t_dset *set, f_trv trv)
{
	t_dset	*curr;

	if (set && trv)
	{
		set = ef_dset_find(set);
		set->data = trv(set->data);
		curr = set->next;
		for (curr = set->next; curr != set; curr = curr->next)
			curr->data = trv(curr->data);
	}
}
