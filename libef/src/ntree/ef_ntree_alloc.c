/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_ntree_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/26 13:39:52 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:17:47 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_ntree.h"

t_ntree	*ef_ntree_alloc(void)
{
	t_ntree	*node;

	if (!(node = (t_ntree *)malloc(sizeof(t_ntree))))
	{
		perror("malloc");
		exit(1);
	}
	return (node);
}
