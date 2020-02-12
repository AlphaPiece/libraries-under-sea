/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:13:17 by zwang             #+#    #+#             */
/*   Updated: 2019/06/01 12:15:39 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

/*
** ft_strsubn: return # of substrings of str which matches s
*/

int		ft_strsubn(const char *s, const char *subs)
{
	int		n;
	int		i;
	int		j;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == subs[0])
		{
			j = 1;
			while (s[i + j] && subs[j] && s[i + j] == subs[j])
				++j;
			if (!subs[j])
				++n;
		}
		++i;
	}
	return (n);
}
