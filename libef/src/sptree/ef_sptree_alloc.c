/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 10:18:29 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/20 10:19:16 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_sptree	*ef_sptree_alloc(void)
{
	t_sptree	*tree;

	if (!(tree = (t_sptree *)malloc(sizeof(t_sptree))))
		exit(MALLOC_ERROR);
	return (tree);
}
