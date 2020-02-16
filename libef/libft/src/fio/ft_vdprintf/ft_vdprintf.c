/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 10:29:09 by zwang             #+#    #+#             */
/*   Updated: 2020/02/12 07:47:52 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_vdprintf.h"

static void			pack_package(t_package **package, t_strblock *strchain)
{
	*package = (t_package *)malloc(sizeof(t_package));
	(*package)->strchain = strchain;
}

static t_strblock	*black_box(const char *fmt, va_list args)
{
	char		*percent;
	t_strblock	*strchain;
	t_package	*package;

	strchain = create_strblock();
	pack_package(&package, strchain);
	while ((percent = ft_strchr(fmt, '%')))
	{
		if (*fmt != '%')
			str_handler(strchain, fmt, percent);
		fmt = fmt_handler(package, percent + 1, args);
	}
	if (*fmt)
		str_handler(strchain, fmt, NULL);
	free(package);
	return (strchain);
}

int					ft_vdprintf(const int fd, const char *fmt, va_list args)
{
	t_strblock	*strchain;
	int			total_char;
	t_strblock	*tmp;

	strchain = black_box(fmt, args);
	total_char = 0;
	while (strchain)
	{
		write(fd, strchain->str, strchain->storage);
		total_char += strchain->storage;
		tmp = strchain;
		strchain = strchain->next;
		free(tmp);
	}
	return (total_char);
}
