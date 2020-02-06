/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/03 20:59:05 by zwang             #+#    #+#             */
/*   Updated: 2018/11/03 21:10:13 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

char	**ft_strarrdup(char *dst[], const char *src[])
{
	size_t	len;
	int		i;

	len = ft_strarrlen(src);
	if (!(dst = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	i = -1;
	while (src[++i])
		dst[i] = ft_strdup(src[i]);
	dst[i] = NULL;
	return (dst);
}
