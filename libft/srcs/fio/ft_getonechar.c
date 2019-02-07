/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getonechar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 18:28:15 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/06 20:17:43 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_getonechar: get only the first char in a line of stdin
*/

int	ft_getonechar(void)
{
	int	c;

	c = ft_getchar();
	while (ft_getchar() != '\n')
		;
	if (c == '\n')
		return (0);
	return (c);
}
