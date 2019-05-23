/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:13:17 by zwang             #+#    #+#             */
/*   Updated: 2019/05/23 17:37:45 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strsubn: return # of substrings of str which matches s
*/

int		ft_strsubn(const char *s, const char *sub)
{
	int		n;
	int		i;
	int		j;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == sub[0])
		{
			j = 1;
			while (s[i + j] && sub[j] && s[i + j] == sub[j])
				++j;
			if (!sub[j])
				++n;
		}
		++i;
	}
	return (n);
}
