/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dset_free.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 08:01:20 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/01 08:25:15 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_dset.h"

void	ef_dset_free(t_dset *set, f_del del, t_flag one_or_all)
{
	t_dset	*curr;
	t_dset	*next;

	if (set)
	{
		if (one_or_all == ALL)
		{
			set = ef_dset_find(set);
			curr = set->next;
			while (curr != set)
			{
				next = curr->next;
				if (del)
					del(curr->data);
				free(curr);
				curr = next;
			}
		}
		if (del)
			del(set->data);
		free(set);
	}
}
