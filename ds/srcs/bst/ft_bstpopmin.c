/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstpopmin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 09:05:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/12 11:16:40 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

void	*ft_bstpopmin(t_btree **root)
{
	void	*data;

	if (!root || !*root)
		return (NULL);
	else if (!(*root)->left)
	{
		data = (*root)->data;
		ft_bstdelroot(root);
		return (data);
	}
	else
		return (ft_bstpopmin(&(*root)->left));
}
