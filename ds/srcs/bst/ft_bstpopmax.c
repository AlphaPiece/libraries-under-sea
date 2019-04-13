/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstpopmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 08:44:56 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/12 11:16:00 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

void	*ft_bstpopmax(t_btree **root)
{
	void	*data;

	if (!root || !*root)
		return (NULL);
	else if (!(*root)->right)
	{
		data = (*root)->data;
		ft_bstdelroot(root);
		return (data);
	}
	else
		return (ft_bstpopmax(&(*root)->right));
}
