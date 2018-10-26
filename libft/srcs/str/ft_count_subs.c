/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_subs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/20 16:13:17 by zwang             #+#    #+#             */
/*   Updated: 2018/10/26 13:16:53 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_count_subs: count # of sub-strings of str which matches s
*/

int		ft_count_subs(const char *str, const char *s)
{
	int		count;
	int		i;
	int		j;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == s[0])
		{
			j = 1;
			while (str[i + j] && s[j] && str[i + j] == s[j])
				++j;
			if (!s[j])
				++count;
		}
		++i;
	}
	return (count);
}
