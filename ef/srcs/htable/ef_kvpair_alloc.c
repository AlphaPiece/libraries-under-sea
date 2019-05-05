/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_kvpair_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:04:45 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/04 22:06:30 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_kvpair	*ef_kvpair_alloc(void)
{
	t_kvpair	*pair;

	if (!(pair = (t_pair *)malloc(sizeof(t_pair))))
		exit(MALLOC_ERROR);
	return (pair);
}
