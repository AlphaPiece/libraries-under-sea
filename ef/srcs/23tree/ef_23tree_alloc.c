/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_23tree_alloc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/19 19:05:22 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/19 19:06:54 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libef.h"

t_23tree	*ef_23tree_alloc(void)
{
	t_23tree	*tree;

	if (!(tree = (t_23tree *)malloc(sizeof(t_23tree))))
		exit(MALLOC_ERROR);
	return (tree);
}
