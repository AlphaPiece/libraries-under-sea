/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcompose.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 10:23:24 by zwang             #+#    #+#             */
/*   Updated: 2018/10/29 10:49:21 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcompose(int str_num, ...)
{
	va_list	arg_list;
	char	*str_list[str_num];
	int		len_list[str_num];
	int		i;
	char	*str;

	va_start(arg_list, str_num);
	i = -1;
	while (++i < str_num)
	{
		str_list[i] = va_arg(arg_list, char *);
		len_list[i] = ft_strlen(str_list[i]);
	}
	if (!(str = (char *)ft_memalloc(sizeof(char) *
									(ft_sum_intarr(len_list, str_num) + 1))))
		return (NULL);
	i = -1;
	while (++i < str_num)
		ft_strcat(str, str_list[i]);
	return (str);
}
