/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sknode_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 11:19:10 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 12:08:56 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_sknode	*ef_sknode_alloc(void)
{
	t_sknode	*node;

	if (!(node = (t_sknode *)malloc(sizeof(t_sknode))))
		exit(MALLOC_ERROR);
	return (node);
}
