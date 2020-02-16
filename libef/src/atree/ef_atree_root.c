/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ef_atree_root.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 21:58:06 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/01/13 21:59:46 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ef_atree.h"

t_anode	*ef_atree_root(t_atree *tree)
{
	if (tree)
		return (tree->root);
	return (NULL);
}
