/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_kvpair_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:04:45 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/07 22:25:21 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_kvpair	*ef_kvpair_alloc(void)
{
	t_kvpair	*pair;

	if (!(pair = (t_kvpair *)malloc(sizeof(t_kvpair))))
		exit(MALLOC_ERROR);
	return (pair);
}
