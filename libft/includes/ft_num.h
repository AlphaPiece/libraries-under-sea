/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Zexi Wang <twopieces0921@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/05 07:32:36 by Zexi Wang         #+#    #+#             */
/*   Updated: 2020/02/05 08:29:23 by Zexi Wang        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUM_H
# define FT_NUM_H

# include <stdint.h>
# include <stdarg.h>
# include <stdlib.h>
# include <time.h>
# include "ft_type.h"
# include "ft_str.h"

/*
** ===============
** >             <
** >>> NUMBERS <<<
** >             <
** ===============
*/

/*
** F_PREC:	double float decimal digits of precision
** ABS:		absolute value
** MAX:		maximum value
** MIN:		minimum value
*/

# define F_PREC		15

# define ABS(x)		(((x) < 0) ? -(x) : (x))
# define MAX(a,b)	(((a) > (b)) ? (a) : (b))
# define MIN(a,b)	(((a) < (b)) ? (a) : (b))

int					ft_numlen(intmax_t n);
int					ft_unumlen(uintmax_t un);

char				*ft_itoa(int n);
char				*ft_ltoa(long n);
char				*ft_ntoa(intmax_t n);
char				*ft_untoa(uintmax_t un);
char				*ft_ntoa_base(intmax_t n, int base, char hex_case_a);
char				*ft_untoa_base(uintmax_t un, int base, char hex_case_a);
char				*ft_ftoa(double n);

void				ft_swap(int *a, int *b);

int					ft_max(int total_no, ...);
int					ft_min(int total_no, ...);
int					ft_sum(int total_no, ...);

int					ft_intarrmax(int arr[], int len);
int					ft_intarrmin(int arr[], int	len);
int					ft_intarrsum(int arr[], int len);

double				ft_rand(void);
int                 ft_randint(int lower, int upper);
int					*ft_randintarr(int lower, int upper, int len);

uint32_t			ft_inthash(int h);

#endif
