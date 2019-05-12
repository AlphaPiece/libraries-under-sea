/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 13:30:13 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/10 13:58:22 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_randint(int lower, int upper)
{
	static t_bool	seed_is_set = false;

	if (!seed_is_set)
	{
		srand(time(0));
		seed_is_set = true;
	}
	if (lower == upper)
		return (lower);
	if (lower > upper)
		ft_swap(&lower, &upper);
	return (rand() % (upper - lower + 1) + lower);
}
