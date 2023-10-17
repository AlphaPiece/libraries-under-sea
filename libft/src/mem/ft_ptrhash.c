/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptrhash.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:05:32 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/05/22 15:51:00 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mem.h"

uint32_t	ft_ptrhash(void *p)
{
	uint32_t	h;
	
	h = (uint64_t)p & 0x00000000ffffffff;
    h = h ^ (h >> 4);
    h = (h ^ 0xdeadbeef) + (h << 5);
    h = h ^ (h >> 11);
    return (h);
}
