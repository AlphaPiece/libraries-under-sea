/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_treap_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:41:32 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/24 09:42:20 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_treap.h"

void	ef_treap_free(t_treap *tree)
{
	if (tree)
	{
		ef_treap_clear(tree);
		free(tree);
	}
}
