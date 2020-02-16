/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_dlist_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/24 09:29:51 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 08:06:07 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_dlist.h"

t_dlist	*ef_dlist_alloc(void)
{
	t_dlist	*node;

	if (!(node = (t_dlist *)malloc(sizeof(t_dlist))))
	{
		perror("malloc");
		exit(1);
	}
	return (node);
}
