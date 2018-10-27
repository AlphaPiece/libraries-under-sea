/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hash_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 15:26:48 by zwang             #+#    #+#             */
/*   Updated: 2018/10/26 17:30:49 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_hash_str(const char *s, unsigned int hashsize)
{
	unsigned int	hashval;

	hashval = 0;
	while (*s)
		hashval = *s++ + (hashsize / 3 + 1) * hashval;
	return (hashval % hashsize);
}
