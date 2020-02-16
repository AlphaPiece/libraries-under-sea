/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_atree_alloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:01:02 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:27:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_atree.h"

t_atree	*ef_atree_alloc(void)
{
	t_atree	*tree;

	if (!(tree = (t_atree *)malloc(sizeof(t_atree))))
	{
		perror("malloc");
		exit(1);
	}
	return (tree);
}
