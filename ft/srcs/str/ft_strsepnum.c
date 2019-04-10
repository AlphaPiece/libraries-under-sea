/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsepnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:38:22 by zwang             #+#    #+#             */
/*   Updated: 2018/10/26 14:25:46 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strsepnum: return # of substrings of s separated by any character in delim
*/

int		ft_strsepnum(const char *s, char *delim)
{
	int		count;
	t_state	state;

	if (!s || !*s)
		return (0);
	state = OUT;
	count = (ft_strchr(delim, *s)) ? 0 : 1;
	while (*s)
	{
		if (ft_strchr(delim, *s))
			state = IN;
		else if (state == IN)
		{
			state = OUT;
			++count;
		}
		s++;
	}
	return (count);
}
