/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_rbtree_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:31:36 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/03 16:15:04 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_rbtree	*ef_rbtree_alloc(void)
{
	t_rbtree	*tree;

	if (!(tree = (t_rbtree *)malloc(sizeof(t_rbtree))))
		exit(MALLOC_ERROR);
	return (tree);
}
