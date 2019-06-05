/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sgtree_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 10:35:38 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/29 10:36:31 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_sgtree	*ef_sgtree_alloc(void)
{
	t_sgtree	*tree;

	if (!(tree = (t_sgtree *)malloc(sizeof(t_sgtree))))
		exit(MALLOC_ERROR);
	return (tree);
}
