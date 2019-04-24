/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 09:29:51 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/24 09:31:11 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_dlist	*ef_dlist_alloc(void)
{
	t_dlist	*node;

	if (!(node = (t_dlist *)malloc(sizeof(t_dlist))))
		exit(1);
	return (node);
}
