/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 18:16:00 by zwang             #+#    #+#             */
/*   Updated: 2019/02/17 12:08:59 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_atof(const char *s)
{
	double	rez;
	double	e10;
	t_bool	point_seen;

	while (ft_isspace(*s))
		s++;
	e10 = (*s == '-') ? -1 : 1;
	if (*s == '+' || *s == '-')
		s++;
	point_seen = false;
	while (*s)
	{
		if (!point_seen && *s == '.')
			point_seen = true;
		else if (ft_isdigit(*s))
		{
			if (point_seen)
				e10 /= 10.0;
			rez = rez * 10.0 + *s - '0';
		}
		else
			break ;
		s++;
	}
	return (rez * e10);
}


