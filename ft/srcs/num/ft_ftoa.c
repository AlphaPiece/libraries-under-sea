/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 19:32:28 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/17 11:13:25 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static int	get_dec_len(double n)
{
	int		len;
	int		i;
	t_bool	is_started;
	
	i = 0;
	len = 0;
	is_started = false;
	while (i < F_PREC)
	{
		n *= 10;
		if (!is_started && (int)n % 10 != 0)
			is_started = true;
		if (is_started)
			i++;
		len++;
	}
	return (len);
}

char		*ft_ftoa(double n)
{
	long	int_nbr;
	char	*int_part;
	int		int_len;
	double	dec_nbr;
	char	*dec_part;
	long	dec_len;
	int		i;
	char	*s;

	int_nbr = (int)n;
	int_part = ft_ltoa(int_nbr);
	int_len = ft_strlen(int_part);
	dec_len = (int_nbr == 0) ? get_dec_len(n) : F_PREC - int_len;
	if (!(dec_part = (char *)malloc(sizeof(char) * (dec_len + 1))))
	{
		free(int_part);
		return (NULL);
	}
	dec_nbr = n - int_nbr;
	i = -1;
	while (++i < dec_len)
	{
		dec_nbr *= 10;
		dec_part[i] = (long)dec_nbr % 10 + '0';
	}
	dec_part[i] = '\0';
	s = ft_strcompose(3, int_part, ".", dec_part);
	free(int_part);
	free(dec_part);
	return (s);
}
