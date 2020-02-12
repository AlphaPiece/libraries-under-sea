/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fio.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 07:36:27 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/05 08:36:14 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIO_H
# define FT_FIO_H

//# include <stddef.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdlib.h>
# include "ft_type.h"
# include "ft_str.h"

/*
** =========================
** >                       <
** >>> FILE INPUT/OUTPUT <<<
** >                       <
** =========================
*/

/*
** BUF_SIZ:	used in ft_getchar
*/

# define BUF_SIZ	128

void				ft_putchar(char c);
void				ft_dputchar(int fd, char c);

void				ft_putnchar(char c, int n);
void				ft_putncharln(char c, int n);
void				ft_dputnchar(int fd, char c, int n);

void				ft_putnbr(int n);
void				ft_dputnbr(int fd, int n);

void				ft_putstr(const char *s);
void				ft_dputstr(int fd, const char *s);

void				ft_putlstr(const char *s, unsigned int start, size_t len);
void				ft_dputlstr(int fd, const char *s, unsigned int start,
								size_t len);

int					ft_printf(const char *fmt, ...);
int					ft_dprintf(int fd, const char *fmt, ...);
int					ft_vdprintf(int fd, const char *fmt, va_list args);

int					ft_getchar(void);
int					ft_getonechar(void);

int					ft_nextline(const int fd, char **line);

#endif
