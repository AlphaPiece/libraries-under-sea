/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 21:02:57 by zwang             #+#    #+#             */
/*   Updated: 2018/11/03 21:12:21 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Precondition: arr is null-terminated
*/

size_t	ft_strarrlen(const char *arr[])
{
	size_t	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}
