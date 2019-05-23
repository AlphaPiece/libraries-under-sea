/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fib.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 16:16:37 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/23 18:19:50 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	tab[93] = {0, 1};

long long	ft_fib(int n)
{
	if (n < 0 || n > 92)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	if (tab[n])
		return (tab[n]);
	return ((tab[n] = ft_fib(n - 1) + ft_fib(n - 2)));
}
