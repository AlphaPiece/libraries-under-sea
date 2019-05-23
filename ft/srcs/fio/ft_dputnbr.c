/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 15:19:45 by zwang             #+#    #+#             */
/*   Updated: 2019/05/23 15:56:41 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dputnbr(int fd, int n)
{
	unsigned int	nbr;

	if (n < 0)
	{
		ft_dputchar(fd, '-');
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr >= 10)
		ft_dputnbr(fd, nbr / 10);
	ft_dputchar(fd, nbr % 10 + '0');
}
