/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_treap_remove.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 09:23:40 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/24 09:24:51 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_treap.h"

void	ef_treap_remove(t_treap *tree, void *key)
{
	if (tree)
		ef_treap_delete(tree, ef_treap_find(tree, key));
}
