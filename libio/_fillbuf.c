/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _fillbuf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:08:09 by zwang             #+#    #+#             */
/*   Updated: 2018/10/25 17:14:19 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libio.h"

int		_fillbuf(FILE *fp)
{
	int		bufsize;

	if ((fp->flag & (_READ | _EOF | _ERR)) != _READ)
		return (EOF);
	bufsize = (fp->flag & _UNBUF) ? 1 : BUFSIZ;
	if (fp->base == NULL)
		if ((fp->base = (char *)malloc(bufsize)) == NULL)
			return (EOF);
	fp->ptr = fp->base;
	fp->cnt = read(fp->fd, fp->ptr, bufsize);
	if (--fp->cnt < 0)
	{
		if (fp->cnt == -1)
			fp->flag |= _EOF;
		else
			fp->flag |= _ERR;
		fp->cnt = 0;
		return (EOF);
	}
	return ((unsigned char)*fp->ptr++);
}
