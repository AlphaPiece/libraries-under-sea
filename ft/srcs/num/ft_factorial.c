/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 16:18:16 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/24 16:57:42 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Precondition: 0 <= n <= 20
*/

long long	ft_factorial(int n)
{
	long long	tab[22];
	int			i;

	if (n < 0 || n > 21)
		return (-1);
	tab[0] = 1;
	i = 0;
	while (++i <= n)
		tab[i] = tab[i - 1] * i;
	return (tab[n]);
}
