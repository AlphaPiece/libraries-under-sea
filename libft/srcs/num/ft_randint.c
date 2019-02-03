/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_randint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/02 20:55:31 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/02/02 21:08:00 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_randint(int lower, int upper)
{
    int     range;
    time_t  t;

    range = upper - lower + 1;
    srand((unsigned int)time(&t));
    return (rand() % range + lower);
}
