/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dset_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 07:55:49 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/01/29 09:35:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dset	*ef_dset_find(t_dset *set)
{
	if (set != set->parent)
		set->parent = ef_dset_find(set->parent);
	return (set->parent);
}
