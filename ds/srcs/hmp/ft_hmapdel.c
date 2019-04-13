/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hmapdel.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 13:57:47 by zwang             #+#    #+#             */
/*   Updated: 2019/04/12 11:18:28 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libds.h"

void	ft_hmapdel(t_hmap **hmap)
{
	if (!*hmap)
		return ;
	ft_hmapclear(*hmap);
	free((*hmap)->pairs);
	ft_memfree((void **)hmap);
}
