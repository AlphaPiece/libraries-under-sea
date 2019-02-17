/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 18:16:00 by zwang             #+#    #+#             */
/*   Updated: 2019/02/16 19:31:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(const char *str)
{
	double	int_part;
	double	dec_part;
	int		len;

	int_part = (double)ft_atoi(str);
	while (*str && *(str - 1) != '.')
		str++;
	dec_part = (double)ft_atoi(str);
	len = 0;
	while (ft_isdigit(str[len]))
		len++;
	while (len--)
		dec_part /= 10;
	return (int_part + ((int_part > 0) ? dec_part : -dec_part));
}
