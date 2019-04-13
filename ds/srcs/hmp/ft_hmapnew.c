/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hmapnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 14:54:59 by zwang             #+#    #+#             */
/*   Updated: 2019/04/12 11:18:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

t_hmap	*ft_hmapnew(void)
{
	t_hmap	*hmap;

	if (!(hmap = (t_hmap *)malloc(sizeof(t_hmap))))
		return (NULL);
	if (!(hmap->pairs = (t_pair **)ft_memalloc(sizeof(t_pair *) * HASH_SPACE)))
	{
		free(hmap);
		return (NULL);
	}
	hmap->count = 0;
	return (hmap);
}
