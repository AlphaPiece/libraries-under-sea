/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fflush.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 19:44:21 by zwang             #+#    #+#             */
/*   Updated: 2018/10/25 19:58:11 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libio.h"

int		fflush(FILE *fp)
{
	int		retval;
	int		i;

	retval = 0;
	if (fp == NULL)
	{
		for (i = 0; i < OPEN_MAX; i++)
			if ((_iob[i]->flag & _WRITE) && (fflush(_iob[i]) == -1))
				retval = -1;
	}
	else
	{
		if ((fp->flag & _WRITE) == 0)
			return (-1);
		_flushbuf(EOF, fp);
		if (fp->flag & _ERR)
			retval = -1;
	}
	return (retval);
}
