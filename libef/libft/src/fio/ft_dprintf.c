/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 21:54:39 by zwang             #+#    #+#             */
/*   Updated: 2019/06/01 14:30:15 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fio.h"

int		ft_dprintf(const int fd, const char *fmt, ...)
{
	va_list	args;
	int		total_char;

	va_start(args, fmt);
	total_char = ft_vdprintf(fd, fmt, args);
	va_end(args);
	return (total_char);
}
