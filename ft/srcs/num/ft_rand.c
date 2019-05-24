/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rand.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 18:51:30 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/24 19:13:19 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_rand: return a random number between 0 and 1
*/

double	ft_rand(void)
{
	static t_bool	seed_set = false;

	if (!seed_set)
	{
		srand(time(0));
		seed_set = true;
	}
	return ((double)rand() / (double)RAND_MAX);
}
