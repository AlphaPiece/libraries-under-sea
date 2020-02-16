/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:31:36 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/16 10:47:14 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_rbtree.h"

t_rbtree	*ef_rbtree_alloc(void)
{
	t_rbtree	*tree;

	if (!(tree = (t_rbtree *)malloc(sizeof(t_rbtree))))
	{
		perror("malloc");
		exit(1);
	}
	return (tree);
}
