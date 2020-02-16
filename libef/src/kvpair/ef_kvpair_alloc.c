/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_kvpair_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 22:04:45 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/12 09:19:49 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_kvpair.h"

t_kvpair	*ef_kvpair_alloc(void)
{
	t_kvpair	*pair;

	if (!(pair = (t_kvpair *)malloc(sizeof(t_kvpair))))
	{
		perror("malloc");
		exit(1);
	}
	return (pair);
}
