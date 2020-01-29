/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dset_alloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 08:22:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/01/29 08:24:03 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dset	*ef_dset_alloc(void)
{
	t_dset	*set;

	if (!(set = (t_dset *)malloc(sizeof(t_dset))))
		exit(MALLOC_ERROR);
	return (set);
}
