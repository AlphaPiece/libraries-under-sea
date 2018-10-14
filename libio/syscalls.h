/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   syscalls.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/13 20:43:26 by zwang             #+#    #+#             */
/*   Updated: 2018/10/13 22:46:08 by zwang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBIO_H
# define LIBIO_H

# include <fcntl.h>

# define NULL		(void *)0
# define EOF		(-1)
# define BUFSIZ		1024
# define OPEN_MAX	20

typedef struct	_iobuf
{
	int			cnt;
	char		*ptr;
	char		*base;
	int			flag;
	int			fd;
}				FLIE;

extern FILE		_iob[OPEN_MAX];

# define stdin		(&_iob[0])
# define stdout		(&_iob[1])
# define stderr		(&_ibo[2])

enum			_flags
{
	_READ	= 01;
	_WRITE	= 02;
	_UNBUF	= 04;
	_EOF	= 010;
	_ERR	= 020;
}

int				_fillbuf(FILE);
int				_flushbuf(int, FILE *);

# define	feof(p)		(((p)->flag & _EOF) != 0)
# define	ferror(p)	(((p)->flag & _ERR) != 0)
# define	fileno(p)	((p)->fd)

# define	getc(p)		((--(p)->cnt >= 0) \
							? (unsigned char)*(p)->ptr++ : _fillbuf(0))
# define	putc(x, p)	((--(p)->cnt >= 0) \
							? *(p)->ptr++ = (x) : _flushbuf((x), p))

# define	getchar()	getc(stdin)
# define	putchar(x)	putc((x), stdout)

FILE			_iob[OPEN_MAX] = \
{
	{0, (char *)0, (char *)0, _READ, 0},
	{0, (char *)0, (char *)0, _WRITE, 1},
	{0, (char *)0, (char *)0, _WRITE | _UNBUF, 2}
};

#endif
