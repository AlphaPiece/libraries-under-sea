/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 13:39:52 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/26 13:41:25 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_ntree	*ef_ntree_alloc(void)
{
	t_ntree	*node;

	if (!(node = (t_ntree *)malloc(sizeof(t_ntree))))
		exit(MALLOC_ERROR);
	return (node);
}
