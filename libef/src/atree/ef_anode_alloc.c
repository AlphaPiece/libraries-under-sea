/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_anode_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 17:55:59 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/12 17:57:10 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_anode	*ef_anode_alloc(void)
{
	t_anode	*node;

	if (!(node = (t_anode *)malloc(sizeof(t_anode))))
		exit(MALLOC_ERROR);
	return (node);
}
