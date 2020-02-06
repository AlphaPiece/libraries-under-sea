/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 13:04:45 by zwang             #+#    #+#             */
/*   Updated: 2018/11/01 10:21:53 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	*ft_strtrim(const char *s)
{
	size_t	i;
	size_t	len;

	if (!s)
		return (0);
	if (!(*s))
		return ("");
	i = 0;
	while (ft_isspace(s[i]))
		i++;
	len = ft_strlen(s) - 1;
	while (len > i && ft_isspace(s[len]))
		len--;
	if (len < i)
		return (ft_strdup(""));
	return (ft_strsub(s, i, len - i + 1));
}
