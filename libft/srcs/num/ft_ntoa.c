/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ntoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 10:51:15 by zwang             #+#    #+#             */
/*   Updated: 2019/02/16 20:26:52 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ntoa(intmax_t n)
{
	char		*str;
	int			i;
	uintmax_t	nbr;

	i = ft_numlen(n);
	if (!(str = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	str[i--] = '\0';
	str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		nbr = -n;
	}
	else
		nbr = n;
	while (nbr > 0)
	{
		str[i--] = '0' + (nbr % 10);
		nbr /= 10;
	}
	return (str);
}
