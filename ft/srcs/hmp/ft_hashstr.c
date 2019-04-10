/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:26:48 by zwang             #+#    #+#             */
/*   Updated: 2019/04/06 14:36:53 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libhmap.h"

unsigned int	ft_hashstr(const char *s, unsigned int hashsize)
{
	unsigned int	hashval;

	hashval = 0;
	while (*s)
		hashval = *s++ + (hashsize / 3 + 1) * hashval;
	return (hashval % hashsize);
}
