/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:36:31 by zwang             #+#    #+#             */
/*   Updated: 2018/11/01 13:59:56 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putlstr_fd(const char *str, unsigned int start, size_t len, int fd)
{
	size_t	i;

	i = 0;
	while (str[start + i] && i < len)
		ft_putchar_fd(str[start + i++], fd);
}
