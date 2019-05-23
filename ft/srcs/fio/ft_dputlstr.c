/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dputlstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:36:31 by zwang             #+#    #+#             */
/*   Updated: 2019/05/23 16:01:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dputlstr(int fd, const char *s, unsigned int start, size_t len)
{
	size_t	i;

	if (s && fd >= 0)
	{
		i = 0;
		while (s[start + i] && i < len)
			ft_dputchar(fd, s[start + i++]);
	}
}
