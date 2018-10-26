/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnsepc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:38:22 by zwang             #+#    #+#             */
/*   Updated: 2018/10/25 21:30:36 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

enum	e_state {OUT, IN};

/*
** ft_strnsepc: return # of substrings of s separated by any character in delim
*/

int		ft_strnsepc(const char *s, char *delim)
{
	int				count;
	enum e_state	state;

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
