/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:18:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 11:04:37 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_sptree.h"

t_sptree	*ef_sptree_alloc(void)
{
	t_sptree	*tree;

	if (!(tree = (t_sptree *)malloc(sizeof(t_sptree))))
	{
		perror("malloc");
		exit(1);
	}
	return (tree);
}
