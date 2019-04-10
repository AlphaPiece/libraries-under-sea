/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 16:16:37 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/24 16:56:33 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	tab[93] = {0, 1};

long long	ft_fibonacci(int n)
{
	if (n < 0 || n > 92)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	if (tab[n])
		return (tab[n]);
	return ((tab[n] = ft_fibonacci(n - 1) + ft_fibonacci(n - 2)));
}
