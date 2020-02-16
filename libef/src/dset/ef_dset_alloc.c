/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dset_alloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 08:22:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 12:22:34 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_dset.h"

t_dset	*ef_dset_alloc(void)
{
	t_dset	*set;

	if (!(set = (t_dset *)malloc(sizeof(t_dset))))
	{
		perror("malloc");
		exit(1);
	}
	return (set);
}
