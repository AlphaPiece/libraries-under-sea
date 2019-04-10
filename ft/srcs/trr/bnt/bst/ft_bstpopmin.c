/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bstpopmin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 09:05:48 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/03/16 09:23:00 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
