/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strend.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 14:03:49 by zwang             #+#    #+#             */
/*   Updated: 2019/06/01 12:12:00 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_str.h"

t_bool	ft_strend(const char *s, const char *subs)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(subs);
	if (ft_strlen(s) < len)
		return (false);
	while (*s)
		s++;
	while (*subs)
		subs++;
	i = 0;
	while (i++ < len)
		if (*s-- != *subs--)
			return (false);
	return (true);
}
