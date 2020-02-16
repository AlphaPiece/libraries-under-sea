/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_anode_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 17:55:59 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:27:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_atree.h"

t_anode	*ef_anode_alloc(void)
{
	t_anode	*node;

	if (!(node = (t_anode *)malloc(sizeof(t_anode))))
	{
		perror("malloc");
		exit(1);
	}
	return (node);
}
