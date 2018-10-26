/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _flushbuf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 19:18:59 by zwang             #+#    #+#             */
/*   Updated: 2018/10/25 19:44:09 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libio.h"

int		_flushbuf(int c, FILE *fp)
{
	int				written_cnt;
	int				bufsize;
	unsigned char	uc;

	if ((fp->flag & (_WRITE | _EOF | _ERR)) != _WRITE)
		return (EOF);
	if (fp->base == NULL && (fp->flag & _UNBUF) == 0)
	{
		if ((fp->base = (char *)malloc(BUFSIZ)) == NULL)
			fp->flag |= _UNBUF;
		else
		{
			fp->ptr = fp->base;
			fp->cnt = BUFSIZ - 1;
		}
	}
	uc = c;
	if (fp->flag & _UNBUF)
	{
		fp->base = NULL;
		fp->ptr = fp->base;
		fp->cnt = 0;
		if (c == EOF)
			return (EOF);
		written_cnt = write(fp->fd, &uc, 1);
		bufsize = 1;
	}
	else
	{
		if (c != EOF)
			fp->ptr++ = uc;
		bufsize = (int)(fp->ptr - fp->base);
		written_cnt = write(fp->fd, fp->base, bufsize);
		fp->ptr = fp->base;
		fp->cnt = BUFSIZ - 1;
	}
	if (written_cnt == bufsize)
		return (c);
	else
	{
		fp->flag |= _ERR;
		return (EOF);
	}
}
