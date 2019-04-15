/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btdel.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/15 22:28:38 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/04/13 20:59:48 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

void	ft_btdel(t_btree **root)
{
	if (*root)
	{
		ft_btdel(&(*root)->left);
		ft_btdel(&(*root)->right);
		ft_memfree((void **)root);
	}
}
