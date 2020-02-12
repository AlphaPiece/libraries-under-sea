/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsepn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:38:22 by zwang             #+#    #+#             */
/*   Updated: 2019/05/23 17:37:36 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
** ft_strsepn: return # of substrings of s separated by any character in delim
*/

int		ft_strsepn(const char *s, char *delim)
{
	int		n;
	t_state	state;

	if (!s || !*s)
		return (0);
	state = OUT;
	n = (ft_strchr(delim, *s)) ? 0 : 1;
	while (*s)
	{
		if (ft_strchr(delim, *s))
			state = IN;
		else if (state == IN)
		{
			state = OUT;
			++n;
		}
		s++;
	}
	return (n);
}
