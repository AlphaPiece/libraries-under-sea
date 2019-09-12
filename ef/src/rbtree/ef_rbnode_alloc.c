/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbnode_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:31:36 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/09 15:07:31 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbnode	*ef_rbnode_alloc(void)
{
	t_rbnode	*node;

	if (!(node = (t_rbnode *)malloc(sizeof(t_rbnode))))
		exit(MALLOC_ERROR);
	return (node);
}
