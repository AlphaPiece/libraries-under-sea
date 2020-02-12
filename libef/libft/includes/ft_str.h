/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 07:35:23 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/05 08:33:52 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STR_H
# define FT_STR_H

# include <stdlib.h>
# include <stdarg.h>
# include "ft_type.h"
# include "ft_mem.h"
# include "ft_chr.h"
# include "ft_num.h"

/*
** ===============================
** >                             <
** >>> ASCII CHARACTER STRINGS <<<
** >                             <
** ===============================
*/

char				*ft_strnew(size_t size);
void				ft_strclr(char *s);
void				ft_strdel(char **p);

int					ft_atoi(const char *str);
long				ft_atol(const char *str);
double				ft_atof(const char *str);
int					ft_atoi_base(const char *str, int base);
long				ft_atol_base(const char *str, int base);

t_bool				ft_isnumeric(char *s);
t_bool				ft_strstart(const char *str, const char *substr);
t_bool				ft_strend(const char *str, const char *substr);

int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
t_bool				ft_strequ(const char *s1, const char *s2);
t_bool				ft_strnequ(const char *s1, const char *s2, size_t n);

char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
								size_t len);

size_t				ft_strlen(const char *s);
size_t				ft_strclen(const char *s, char *delim);

char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);

char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strdup(const char *s);

void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));

char				*ft_strtrim(const char *s);
void				ft_strcap(char s[]);

char				*ft_strjoin(const char *s1, char const *s2);
char				*ft_strcompose(int str_num, ...);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				**ft_strsplit(const char *s, char *delim);

int					ft_strsepn(const char *s, char *delim);
int					ft_strsubn(const char *str, const char *s);

size_t				ft_strarrlen(const char *arr[]);
char				**ft_strarrdup(char *dst[], const char *src[]);
void				ft_strarrsort(char *arr[], int len,
									int (*cmp)(const char *, const char *));
void				ft_strarrdel(char *arr[]);

uint32_t			ft_strhash(char *s);

#endif
