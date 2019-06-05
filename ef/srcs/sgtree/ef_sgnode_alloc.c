/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sgnode_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:33:21 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/29 10:34:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_sgnode	*ef_sgnode_alloc(void)
{
	t_sgnode	*node;

	if (!(node = (t_sgnode *)malloc(sizeof(t_sgnode))))
		exit(MALLOC_ERROR);
	return (node);
}
