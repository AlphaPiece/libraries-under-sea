/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:07:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/16 16:19:11 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_slist	*ef_slist_alloc(void)
{
	t_slist	*node;

	if (!(node = (t_slist *)malloc(sizeof(t_slist))))
		exit(1);
	return (node);
}