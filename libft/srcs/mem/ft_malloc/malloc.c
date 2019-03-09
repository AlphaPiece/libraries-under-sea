/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 23:29:58 by Zexi Wang         #+#    #+#             */
/*   Updated: 2019/03/01 23:48:19 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <assert.h>
#include <string.h>
#include <sys/types.y>
#include <unistd.h>

void	*malloc(size_t size)
{
	void	*p = sbrk(0);
	void	*request = sbrk(size);

	if (request == (void *)(-1))
		return NULL;
	else
	{
		assert(p == request);
		return (p);
	}
}
