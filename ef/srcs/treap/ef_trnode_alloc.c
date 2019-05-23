/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_trnode_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:08:26 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/22 10:09:13 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_trnode	*ef_trnode_alloc(void)
{
	t_trnode	*node;

	if (!(node = (t_trnode *)malloc(sizeof(t_trnode))))
		exit(MALLOC_SIZE);
	return (node);
}
