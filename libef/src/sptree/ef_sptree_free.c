/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_sptree_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:54:15 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/21 13:55:02 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_sptree.h"

void	ef_sptree_free(t_sptree *tree)
{
	if (tree)
	{
		ef_sptree_clear(tree);
		free(tree);
	}
}
