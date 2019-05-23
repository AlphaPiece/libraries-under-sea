/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_analyze_float.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 09:33:37 by zwang             #+#    #+#             */
/*   Updated: 2019/05/22 15:47:25 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** t_fcompo:    contains all the parts of a single float type data
** sign:        1 bit (0)
** exponent:    8 bits (1 ~ 8) (the exponent of 2)
** mantissa:    23 bits (9 ~ 31) (the presence of 2's power: 2^-1, 2^-2, ...)
*/

typedef struct      s_fcompo
{
    int             sign;
    int             exponent;
    long            mantissa;
}                   t_fcompo;

t_fcompo	*ft_analyze_float(float n)
{
	t_fcompo		*fcompo;
	long			*nbr;

	if (!(fcompo = (t_fcompo *)malloc(sizeof(t_fcompo))))
		return (NULL);
	nbr = (long *)&n;
	fcompo->mantissa = *nbr & 0x7FFFFF;
	fcompo->mantissa |= 0x800000;
	fcompo->exponent = ((*nbr >> 23) & 0xFF) - 0x7F;
	fcompo->sign = (*nbr >> 31) & 0x1;
	return (fcompo);
}
