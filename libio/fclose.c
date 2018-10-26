/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fclose.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 19:58:17 by zwang             #+#    #+#             */
/*   Updated: 2018/10/25 20:01:14 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libio.h"

int		fclose(FILE *fp)
{
	int		fd;

	if (fp == NULL)
		return (-1);
	fd = fp->fd;
	fflush(fp);
	fp->cnt = 0;
	fp->ptr = NULL;
	if (fp->base != NULL)
		free(fp->base);
	fp->base = NULL;
	fp->flag = 0;
	fp->fd = -1;
	return (close(fd));
}
