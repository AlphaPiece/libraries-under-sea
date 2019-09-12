/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 20:04:11 by zwang             #+#    #+#             */
/*   Updated: 2019/06/01 12:11:16 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_strstart(const char *s, const char *subs)
{
	size_t	i;

	i = 0;
	while (s[i] && subs[i])
	{
		if (s[i] != subs[i])
			break ;
		i++;
	}
	return (i == ft_strlen(subs));
}
