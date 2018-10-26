/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fopen.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 17:03:30 by zwang             #+#    #+#             */
/*   Updated: 2018/10/25 17:05:25 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libio.h"

#define PERMS	0666

FILE	*fopen(char *name, char *mode)
{
	int		fd;
	FILE	*fp;

	if (*mode != 'r' && *mode != 'w' && *mode != 'a')
		return (NULL);
	fp = _iob;
	while (fp < _iob + OPEN_MAX && (fp->flag & (_READ | _WRITE)) != 0)
		fp++;
	if (fp >= _iob + OPEN_MAX)
		return (NULL);
	if (*mode == 'w')
		fd = creat(name, PERMS);
	else if (*mode == 'a')
	{
		if ((fd = open(name, O_WRONLY, 0)) == -1)
			fd = creat(name, PERMS);
		lseek(fd, 0L, 2);
	}
	else
		fd = open(name, O_RDONLY, 0);
	if (fd == -1)
		return (NULL);
	fp->fd = fd;
	fp->cnt = 0;
	fp->base = NULL;
	fp->flag = (*mode == 'r') ? _READ : _WRITE;
	return (fp);
}
