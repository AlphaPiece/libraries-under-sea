/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnnode_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 09:25:14 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/17 09:26:34 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_bnnode	*ef_bnnode_alloc(void)
{
	t_bnnode	*node;

	if (!(node = (t_bnnode *)malloc(sizeof(t_bnnode))))
		exit(MALLOC_ERROR);
	return (node);
}
