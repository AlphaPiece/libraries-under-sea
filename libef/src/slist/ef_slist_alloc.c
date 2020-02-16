/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_slist_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:07:44 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/12 09:44:00 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_slist.h"

t_slist	*ef_slist_alloc(void)
{
	t_slist	*node;

	if (!(node = (t_slist *)malloc(sizeof(t_slist))))
	{
		perror("malloc");
		exit(1);
	}
	return (node);
}
