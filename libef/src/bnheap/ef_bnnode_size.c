/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bnnode_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 08:24:49 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 12:15:16 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "ef_bnheap.h"

int	ef_bnnode_size(t_bnnode *node)
{
	return ((node) ? pow(2, node->degree) : 0);
}
