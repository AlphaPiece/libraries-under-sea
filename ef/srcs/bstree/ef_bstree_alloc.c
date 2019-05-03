/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_bstree_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:31:36 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/01 13:33:15 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_bstree	*ef_bstree_alloc(void)
{
	t_bstree	*tree;

	if (!(tree = (t_bstree *)malloc(sizeof(t_bstree))))
		exit(MALLOC_ERROR);
	return (tree);
}
