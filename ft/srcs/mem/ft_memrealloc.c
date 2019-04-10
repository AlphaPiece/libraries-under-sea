/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/05 14:07:46 by zwang             #+#    #+#             */
/*   Updated: 2019/04/06 16:34:30 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Precondition: new size must be larger than the older size
*/

void	*ft_memrealloc(void **ptr, size_t oldsize, size_t newsize)
{
	void	*newptr;

	if (oldsize >= newsize)
		return (*ptr);
	if (!(newptr = ft_memalloc(newsize)))
	{
		ft_memfree(ptr);
		return (NULL);
	}
	newptr = ft_memcpy(newptr, *ptr, oldsize);
	ft_memfree(ptr);
	return (newptr);
}
