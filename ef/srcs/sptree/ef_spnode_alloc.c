/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_spnode_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:15:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 10:17:09 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_spnode	*ef_spnode_alloc(void)
{
	t_spnode	*node;

	if (!(node = (t_spnode *)malloc(sizeof(t_spnode))))
		exit(MALLOC_ERROR);
	return (node);
}
