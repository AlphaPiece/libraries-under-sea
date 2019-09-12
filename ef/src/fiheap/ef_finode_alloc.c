/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_finode_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 11:09:52 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/30 11:10:56 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_finode	*ef_finode_alloc(void)
{
	t_finode	*node;

	if (!(node = (t_finode *)malloc(sizeof(t_finode))))
		exit(MALLOC_ERROR);
	return (node);
}
