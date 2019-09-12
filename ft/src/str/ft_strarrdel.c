/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strarrdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 10:51:17 by zwang             #+#    #+#             */
/*   Updated: 2019/04/08 20:19:40 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Precondition: arr is null-terminated and every element is mallocked
*/

void	ft_strarrdel(char *arr[])
{
	int	i;

	i = 0;
	while (arr[i])
		ft_memfree((void **)&arr[i++]);
	free(arr);
}
