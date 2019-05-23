/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 20:31:27 by zwang             #+#    #+#             */
/*   Updated: 2019/05/23 16:06:38 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		total_char;

	va_start(args, fmt);
	total_char = ft_vdprintf(1, fmt, args);
	va_end(args);
	return (total_char);
}
